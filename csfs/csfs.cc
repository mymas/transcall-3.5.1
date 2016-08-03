/*
    Copyright 2006,2007,2008,2009,2010 Martin Pärtel <martin.partel@gmail.com>

    This file is part of bindfs.

    bindfs is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    bindfs is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with bindfs.  If not, see <http://www.gnu.org/licenses/>.


    This file is based on fusexmp_fh.c from FUSE 2.5.3,
    which had the following notice:
    ---
    FUSE: Filesystem in Userspace
    Copyright (C) 2001-2006  Miklos Szeredi <miklos@szeredi.hu>

    This program can be distributed under the terms of the GNU GPL.
    See the file COPYING.
    ---

*/

#include <config.h>

/* For pread/pwrite */
#define _XOPEN_SOURCE 500

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#ifdef HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif
#include <sys/statvfs.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>
#include <getopt.h>
#include <assert.h>
#include <pwd.h>
#include <grp.h>
#ifdef HAVE_SETXATTR
#include <sys/xattr.h>
#endif

#include <fuse.h>
#include <fuse_opt.h>

#include "debug.h"
#include "permchain.h"
#include "userinfo.h"
#include "misc.h"

#include "csfs.h"
#include "addr.h"
#include "strset.h"

#define DEBUG

#ifndef NOTC
enum CreatePolicy {
    CREATE_AS_USER,
    CREATE_AS_MOUNTER
};

enum ChownPolicy {
    CHOWN_NORMAL,
    CHOWN_IGNORE,
    CHOWN_DENY
};

enum ChgrpPolicy {
    CHGRP_NORMAL,
    CHGRP_IGNORE,
    CHGRP_DENY
};

enum ChmodPolicy {
    CHMOD_NORMAL,
    CHMOD_IGNORE,
    CHMOD_DENY
};

enum XAttrPolicy {
    XATTR_UNIMPLEMENTED,
    XATTR_READ_ONLY,
    XATTR_READ_WRITE
};
#endif // !NOTC

/* SETTINGS */
static struct settings {
    const char *progname;
    struct permchain *permchain; /* permission bit rules. see permchain.h */
    uid_t new_uid; /* user-specified uid */
    gid_t new_gid; /* user-specified gid */
    uid_t create_for_uid;
    gid_t create_for_gid;
    const char *mntsrc;
    const char *mntdest;
#ifndef NOTC
    int domid;
#endif
    int mntsrc_fd;

#ifdef NOTC
    enum CreatePolicy {
        CREATE_AS_USER,
        CREATE_AS_MOUNTER
    } create_policy;
#else
    enum CreatePolicy create_policy;
#endif

    struct permchain *create_permchain; /* the --create-with-perms option */

#ifdef NOTC
    enum ChownPolicy {
        CHOWN_NORMAL,
        CHOWN_IGNORE,
        CHOWN_DENY
    } chown_policy;

    enum ChgrpPolicy {
        CHGRP_NORMAL,
        CHGRP_IGNORE,
        CHGRP_DENY
    } chgrp_policy;

    enum ChmodPolicy {
        CHMOD_NORMAL,
        CHMOD_IGNORE,
        CHMOD_DENY
    } chmod_policy;
#else
    enum ChownPolicy chown_policy;
    enum ChgrpPolicy chgrp_policy;
    enum ChmodPolicy chmod_policy;
#endif // NOTC
    
    int chmod_allow_x;

#ifdef NOTC
    enum XAttrPolicy {
        XATTR_UNIMPLEMENTED,
        XATTR_READ_ONLY,
        XATTR_READ_WRITE
    } xattr_policy;
#else
    enum XAttrPolicy xattr_policy;
#endif

    int mirrored_users_only;
    uid_t* mirrored_users;
    int num_mirrored_users;
    gid_t *mirrored_members;
    int num_mirrored_members;

    int ctime_from_mtime;
} settings;


#ifndef NOTC
struct csfs_handle {
    struct dentry *dentry;
    union {
        int fd;
        DIR *dp;
    };
};

#define PAGE_SHIFT 12
#define PAGE_SIZE	 (1UL << PAGE_SHIFT)
#define PAGE_MASK	 (~(PAGE_SIZE-1))
#endif // !NOTC


/* PROTOTYPES */

static int is_mirroring_enabled();

/* Checks whether the uid is to be the mirrored owner of all files. */
static int is_mirrored_user(uid_t uid);

/* Processes the virtual path to a real path. Don't free() the result. */
static const char *process_path(const char *path);

/* The common parts of getattr and fgetattr */
static int getattr_common(const char *path, struct stat *stbuf);


/* FUSE callbacks */
static void *csfs_init();
static void csfs_destroy(void *private_data);
static int csfs_getattr(const char *path, struct stat *stbuf);
static int csfs_fgetattr(const char *path, struct stat *stbuf,
                           struct fuse_file_info *fi);
static int csfs_readlink(const char *path, char *buf, size_t size);
static int csfs_opendir(const char *path, struct fuse_file_info *fi);
static inline DIR *get_dirp(struct fuse_file_info *fi);
static int csfs_readdir(const char *path, void *buf, fuse_fill_dir_t filler,
                          off_t offset, struct fuse_file_info *fi);
static int csfs_releasedir(const char *path, struct fuse_file_info *fi);
static int csfs_mknod(const char *path, mode_t mode, dev_t rdev);
static int csfs_mkdir(const char *path, mode_t mode);
static int csfs_unlink(const char *path);
static int csfs_rmdir(const char *path);
static int csfs_symlink(const char *from, const char *to);
static int csfs_rename(const char *from, const char *to);
static int csfs_link(const char *from, const char *to);
static int csfs_chmod(const char *path, mode_t mode);
static int csfs_chown(const char *path, uid_t uid, gid_t gid);
static int csfs_truncate(const char *path, off_t size);
static int csfs_ftruncate(const char *path, off_t size,
                            struct fuse_file_info *fi);
static int csfs_utime(const char *path, struct utimbuf *buf);
static int csfs_create(const char *path, mode_t mode, struct fuse_file_info *fi);
static int csfs_open(const char *path, struct fuse_file_info *fi);
static int csfs_read(const char *path, char *buf, size_t size, off_t offset,
                       struct fuse_file_info *fi);
static int csfs_write(const char *path, const char *buf, size_t size,
                        off_t offset, struct fuse_file_info *fi);
static int csfs_statfs(const char *path, struct statvfs *stbuf);
static int csfs_release(const char *path, struct fuse_file_info *fi);
static int csfs_fsync(const char *path, int isdatasync,
                        struct fuse_file_info *fi);


static void print_usage(const char *progname);
static void atexit_func();
static int process_option(void *data, const char *arg, int key,
                          struct fuse_args *outargs);

static int is_mirroring_enabled()
{
    return settings.num_mirrored_users + settings.num_mirrored_members > 0;
}

static int is_mirrored_user(uid_t uid)
{
    int i;
    for (i = 0; i < settings.num_mirrored_users; ++i) {
        if (settings.mirrored_users[i] == uid)
            break;
    }
    if (i < settings.num_mirrored_users) { /* found in mirrored_users */
        return 1;
    } else {
        for (i = 0; i < settings.num_mirrored_members; ++i) {
            if (user_belongs_to_group(uid, settings.mirrored_members[i]))
                break;
        }
        if (i < settings.num_mirrored_members) /* found in mirrored_members */
            return 1;
    }
    return 0;
}


static const char *process_path(const char *path)
{
    if (path == NULL) /* possible? */
        return NULL;

    while (*path == '/')
        ++path;

    if (*path == '\0')
        return ".";
    else
        return path;
}

static int check_invalid_path(const char *path)
{
    if (strncmp(path, "/proc/", 6) == 0)
        return 1;

    if (strncmp(path, "/sys/", 5) == 0)
        return 1;

    return 0;
}

static int check_empty_dir(const char *path)
{
    if (strcmp(path, "/proc") == 0)
        return 1;

    if (strcmp(path, "/sys") == 0)
        return 1;

    return 0;
}

static int getattr_common(const char *procpath, struct stat *stbuf)
{
    struct fuse_context *fc = fuse_get_context();

    /* Copy mtime (file content modification time)
       to ctime (inode/status change time)
       if the user asked for that */
    if (settings.ctime_from_mtime)
        stbuf->st_ctime = stbuf->st_mtime;

    /* Report user-defined owner/group if specified */
    if (settings.new_uid != -1)
        stbuf->st_uid = settings.new_uid;
    if (settings.new_gid != -1)
        stbuf->st_gid = settings.new_gid;

    /* Mirrored user? */
    if (is_mirroring_enabled() && is_mirrored_user(fc->uid)) {
        stbuf->st_uid = fc->uid;
    } else if (settings.mirrored_users_only && fc->uid != 0) {
        stbuf->st_mode &= ~0777; /* Deny all access if mirror-only and not root */
        return 0;
    }

    if ((stbuf->st_mode & S_IFLNK) == S_IFLNK)
        return 0; /* don't bother with symlink permissions -- they don't matter */

    /* Apply user-defined permission bit modifications */
    stbuf->st_mode = permchain_apply(settings.permchain, stbuf->st_mode);

    /* Check that we can really do what we promise */
    if (access(procpath, R_OK) == -1)
        stbuf->st_mode &= ~0444;
    if (access(procpath, W_OK) == -1)
        stbuf->st_mode &= ~0222;
    if (access(procpath, X_OK) == -1)
        stbuf->st_mode &= ~0111;

    return 0;
}

static void *csfs_init()
{
    assert(settings.permchain != NULL);
    assert(settings.mntsrc_fd > 0);

    if (fchdir(settings.mntsrc_fd) != 0) {
        fprintf(
            stderr,
            "Could not change working directory to '%s': %s\n",
            settings.mntsrc,
            strerror(errno)
            );
        fuse_exit(fuse_get_context()->fuse);
    }

    return NULL;
}

static void csfs_destroy(void *private_data)
{
}

static int csfs_getattr(const char *path, struct stat *stbuf)
{
#ifndef NOTC
    struct dentry *dentry;
    struct vfsmount *mnt;
    int success = -1;

    if (check_invalid_path(path) == 1)
        return -ENOENT;

    dentry = lookup_dentry(path, &mnt);
    if (dentry)
        success = get_cached_stat(mnt, dentry, stbuf);

    path = process_path(path);

    if (success == -1) {
        if (lstat(path, stbuf) == -1)
            return -errno;
    }

    return getattr_common(path, stbuf);
#endif // !NOTC
}

static int csfs_fgetattr(const char *path, struct stat *stbuf,
                           struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh;
    struct dentry *dentry;
    struct vfsmount *mnt;
    int success = -1;

    if (check_invalid_path(path) == 1)
        return -ENOENT;

    dentry = lookup_dentry(path, &mnt);
    if (dentry)
        success = get_cached_stat(mnt, dentry, stbuf);

    path = process_path(path);

    if (success == -1) {
        fh = (struct csfs_handle *)fi->fh;

        if (fstat(fh->fd, stbuf) == -1)
            return -errno;
    }

    return getattr_common(path, stbuf);
#endif // !NOTC
}

static int csfs_readlink(const char *path, char *buf, size_t size)
{
#ifndef NOTC
    struct dentry *dentry;
    char *addr;
    int res;
    int success = -1;

    if (check_invalid_path(path) == 1)
        return -ENOENT;

    dentry = lookup_dentry(path);
    if (dentry) {
        res = get_cached_link(dentry, buf, size);
        if (res >= 0)
            success = 0;

#ifdef DEBUG
        if (success == 0)
            printf("cache: %s\n", buf);
#endif
    }

    if (success == -1) {
        path = process_path(path);

    /* No need to check for access to the link itself, since symlink
       permissions don't matter. Access to the path components of the symlink
       are automatically queried by FUSE. */

        res = readlink(path, buf, size - 1);
        if (res == -1)
            return -errno;
    }

    buf[res] = '\0';
    return 0;
#endif // !NOTC
}

static int csfs_opendir(const char *path, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh;
    struct dentry *dentry;
    DIR *dp;

    if (check_invalid_path(path) == 1)
        return -ENOENT;

    dentry = lookup_dentry(path);

    path = process_path(path);
    dp = opendir(path);

    if (dentry == NULL && dp == NULL)
        return -errno;

    fh = (struct csfs_handle *)malloc(sizeof(struct csfs_handle));
    fh->dentry = dentry;
    fh->dp = dp;

    fi->fh = (unsigned long)fh;

    return 0;
#endif // !NOTC
}

static inline DIR *get_dirp(struct fuse_file_info *fi)
{
    return (DIR *) (uintptr_t) fi->fh;
}

static int csfs_readdir(const char *path, void *buf, fuse_fill_dir_t filler,
                          off_t offset, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh;
    struct stat st;
    struct dirent *de;
    struct strset *ss;
    struct snode *node;
    char *name;
    unsigned long ino, mode;
    int res;

    if (check_empty_dir(path) == 1)
        return 0;

    ss = strset_new();

    fh = (struct csfs_handle *)fi->fh;

    // read from directory cache
    if (fh->dentry) {
        get_dir_cache(fh->dentry, ss);

        node = strset_get_head(ss);

        while (node) {
            snode_get_data(node, &name, &ino, &mode);

            memset(&st, 0, sizeof(st));
            st.st_ino = ino;
            st.st_mode = mode;

            if (filler(buf, name, &st, 0)) {
                strset_delete(ss);
                return -ENOMEM;
            }

#ifdef DEBUG
            printf("readdir from cache: %s\n", name);
#endif

            node = snode_get_next(node);
        }
    }

    // read from disk
    if (fh->dp) {
        while ((de = readdir(fh->dp)) != NULL) {
            // skip if it is in directory cache
            if (strset_contains(ss, (char *)de->d_name) == 1)
                continue;
            
            memset(&st, 0, sizeof(st));
            st.st_ino = de->d_ino;
            st.st_mode = de->d_type << 12;
            
#ifdef DEBUG
            printf("readdir from disk: %s\n", name);
#endif
            
            if (filler(buf, de->d_name, &st, 0)) {
                strset_delete(ss);
                return -ENOMEM;
            }
        }
    }

    strset_delete(ss);

    return 0;
#endif // !NOTC
}

static int csfs_releasedir(const char *path, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh = (struct csfs_handle *)fi->fh;

    if (fh->dp)
        closedir(fh->dp);

    return 0;
#endif // !NOTC
}

static int csfs_mknod(const char *path, mode_t mode, dev_t rdev)
{
    int res;
    struct fuse_context *fc;
    uid_t file_owner = -1;
    gid_t file_group = -1;

    path = process_path(path);

    mode = permchain_apply(settings.create_permchain, mode);

    if (S_ISFIFO(mode))
        res = mkfifo(path, mode);
    else
        res = mknod(path, mode, rdev);
    if (res == -1)
        return -errno;

    if (settings.create_policy == CREATE_AS_USER) {
        fc = fuse_get_context();
        file_owner = fc->uid;
        file_group = fc->gid;
    }

    if (settings.create_for_uid != -1)
        file_owner = settings.create_for_uid;
    if (settings.create_for_gid != -1)
        file_group = settings.create_for_gid;

    if ((file_owner != -1) || (file_group != -1)) {
        if (chown(path, file_owner, file_group) == -1) {
            DPRINTF("Failed to chown new device node (%d)", errno);
        }
    }

    return 0;
}

static int csfs_mkdir(const char *path, mode_t mode)
{
    int res;
    struct fuse_context *fc;
    uid_t file_owner = -1;
    gid_t file_group = -1;

    path = process_path(path);

    mode |= S_IFDIR; /* tell permchain_apply this is a directory */
    mode = permchain_apply(settings.create_permchain, mode);

    res = mkdir(path, mode & 0777);
    if (res == -1)
        return -errno;

    if (settings.create_policy == CREATE_AS_USER) {
        fc = fuse_get_context();
        file_owner = fc->uid;
        file_group = fc->gid;
    }

    if (settings.create_for_uid != -1)
        file_owner = settings.create_for_uid;
    if (settings.create_for_gid != -1)
        file_group = settings.create_for_gid;

    if ((file_owner != -1) || (file_group != -1)) {
        if (chown(path, file_owner, file_group) == -1) {
            DPRINTF("Failed to chown new directory (%d)", errno);
        }
    }

    return 0;
}

static int csfs_unlink(const char *path)
{
    int res;

    path = process_path(path);

    res = unlink(path);
    if (res == -1)
        return -errno;

    return 0;
}

static int csfs_rmdir(const char *path)
{
    int res;

    path = process_path(path);

    res = rmdir(path);
    if (res == -1)
        return -errno;

    return 0;
}

static int csfs_symlink(const char *from, const char *to)
{
    int res;
    struct fuse_context *fc;
    uid_t file_owner = -1;
    gid_t file_group = -1;

    to = process_path(to);

    res = symlink(from, to);
    if (res == -1)
        return -errno;

    if (settings.create_policy == CREATE_AS_USER) {
        fc = fuse_get_context();
        file_owner = fc->uid;
        file_group = fc->gid;
    }

    if (settings.create_for_uid != -1)
        file_owner = settings.create_for_uid;
    if (settings.create_for_gid != -1)
        file_group = settings.create_for_gid;

    if ((file_owner != -1) || (file_group != -1)) {
        if (lchown(to, file_owner, file_group) == -1) {
            DPRINTF("Failed to lchown new symlink (%d)", errno);
        }
    }

    return 0;
}

static int csfs_rename(const char *from, const char *to)
{
    int res;

    from = process_path(from);
    to = process_path(to);

    res = rename(from, to);
    if (res == -1)
        return -errno;

    return 0;
}

static int csfs_link(const char *from, const char *to)
{
    int res;

    from = process_path(from);
    to = process_path(to);

    res = link(from, to);
    if (res == -1)
        return -errno;

    return 0;
}

static int csfs_chmod(const char *path, mode_t mode)
{
    int file_execute_only = 0;
    struct stat st;
    mode_t diff = 0;

    path = process_path(path);

    if (settings.chmod_allow_x) {
        /* Get the old permission bits and see which bits would change. */
        if (lstat(path, &st) == -1)
            return -errno;

        if (S_ISREG(st.st_mode)) {
            diff = (st.st_mode & 07777) ^ (mode & 07777);
            file_execute_only = 1;
        }
    }

    switch (settings.chmod_policy) {
    case CHMOD_NORMAL:
        if (chmod(path, mode) == -1)
            return -errno;
        return 0;
    case CHMOD_IGNORE:
        if (file_execute_only) {
            diff &= 00111; /* See which execute bits were flipped.
                              Forget about other differences. */
            if (chmod(path, st.st_mode ^ diff) == -1)
                return -errno;
        }
        return 0;
    case CHMOD_DENY:
        if (file_execute_only) {
            if ((diff & 07666) == 0) {
                /* Only execute bits have changed, so we can allow this. */
                if (chmod(path, mode) == -1)
                    return -errno;
                return 0;
            }
        }
        return -EPERM;
    default:
        assert(0);
    }
}

static int csfs_chown(const char *path, uid_t uid, gid_t gid)
{
    int res;

    if (uid != -1) {
        switch (settings.chown_policy) {
        case CHOWN_NORMAL:
            break;
        case CHOWN_IGNORE:
            uid = -1;
            break;
        case CHOWN_DENY:
            return -EPERM;
        }
    }
    
    if (gid != -1) {
        switch (settings.chgrp_policy) {
        case CHGRP_NORMAL:
            break;
        case CHGRP_IGNORE:
            gid = -1;
            break;
        case CHGRP_DENY:
            return -EPERM;
        }
    }

    if (uid != -1 || gid != -1) {
        path = process_path(path);
        res = lchown(path, uid, gid);
        if (res == -1)
            return -errno;
    }

    return 0;
}

static int csfs_truncate(const char *path, off_t size)
{
    int res;

    path = process_path(path);

    res = truncate(path, size);
    if (res == -1)
        return -errno;

    return 0;
}

static int csfs_ftruncate(const char *path, off_t size,
                            struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh = (struct csfs_handle *)fi->fh;
    int res;

    (void) path;

    res = ftruncate(fh->fd, size);
    if (res == -1)
        return -errno;

    return 0;
#endif // !NOTC
}

static int csfs_utime(const char *path, struct utimbuf *buf)
{
    int res;

    path = process_path(path);

    res = utime(path, buf);
    if (res == -1)
        return -errno;

    return 0;
}

static int csfs_create(const char *path, mode_t mode, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh;
#endif
    int fd;
    struct fuse_context *fc;
    uid_t file_owner = -1;
    gid_t file_group = -1;

    path = process_path(path);

    mode |= S_IFREG; /* tell permchain_apply this is a regular file */
    mode = permchain_apply(settings.create_permchain, mode);

    fd = open(path, fi->flags, mode & 0777);
    if (fd == -1)
        return -errno;

    if (settings.create_policy == CREATE_AS_USER) {
        fc = fuse_get_context();
        file_owner = fc->uid;
        file_group = fc->gid;
    }

    if (settings.create_for_uid != -1)
        file_owner = settings.create_for_uid;
    if (settings.create_for_gid != -1)
        file_group = settings.create_for_gid;

    if ((file_owner != -1) || (file_group != -1)) {
        if (chown(path, file_owner, file_group) == -1) {
            DPRINTF("Failed to chown new file (%d)", errno);
        }
    }

#ifndef NOTC
    fh = (struct csfs_handle *)malloc(sizeof(struct csfs_handle));
    fh->fd = fd;
    fh->dentry = NULL;

    fi->fh = (unsigned long)fh;
#endif

    return 0;
}

static int csfs_open(const char *path, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh;
    struct dentry *dentry;
    int fd;

    if (check_invalid_path(path) == 1)
        return -ENOENT;

    dentry = lookup_dentry(path);

    path = process_path(path);
    fd = open(path, fi->flags);

    if (dentry == NULL && fd == -1)
        return -errno;

    fh = (struct csfs_handle *)malloc(sizeof(struct csfs_handle));
    fh->dentry = dentry;
    fh->fd = fd;

    fi->fh = (unsigned long)fh;

    return 0;
#endif // !NOTC
}

static int csfs_read(const char *path, char *buf, size_t size, off_t offset,
                       struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh;
    long long file_size;
    unsigned long start_index, end_index;
    long long start_off, end_off;
    unsigned long index;
    unsigned long seg_size;
    long long seg_off;
    long long off = 0;
    char *addr;
    int res;

    fh = (struct csfs_handle *)fi->fh;

    if (fh->dentry == NULL) {
        res = pread(fh->fd, buf, size, offset);
        if (res == -1)
            res = -errno;

        return res;
    }

    file_size = get_cached_size(fh->dentry);

    if (offset == file_size)
        return 0;
    else if (offset > file_size)
        return -EINVAL;
    else if (offset + size > file_size)
        size = file_size - offset;

    start_index = offset >> PAGE_SHIFT;
    start_off = offset & ~PAGE_MASK;
    end_index = (offset + size - 1) >> PAGE_SHIFT;
    end_off = (offset + size - 1) & ~PAGE_MASK;
        
    for (index = start_index; index <= end_index; index++) {
        // calculate size and offset of a segment
        seg_size = PAGE_SIZE;
        seg_off = 0;

        if (index == start_index) {
            seg_size -= start_off;
            seg_off = start_off;
        }

        if (index == end_index)
            seg_size -= (PAGE_SIZE - end_off - 1);

        // get page cache
        addr = (char *)map_page_cache(fh->dentry, index);

        if (addr) {
#ifdef DEBUG
            printf("read: cache[%llu..%llu] -> buf[%lld]\n",
                   index * PAGE_SIZE + seg_off,
                   index * PAGE_SIZE + seg_off + seg_size - 1,
                   off);
#endif

            memcpy(&buf[off], &addr[seg_off], seg_size);

            //unmap_page_cache(addr);

            off += seg_size;
        }
        else {
#ifdef DEBUG
            printf("read: file[%llu..%llu] -> buf[%lld]\n",
                   index * PAGE_SIZE + seg_off,
                   index * PAGE_SIZE + seg_off + seg_size - 1,
                   off);
#endif

            res = pread(fh->fd, &buf[off], seg_size,
                        index * PAGE_SIZE + seg_off);
            if (res == -1)
                return -errno;
            else if (res != seg_size)
                return -EINVAL;

            off += res;
        }
    }

    return off;
#endif // !NOTC
}

static int csfs_write(const char *path, const char *buf, size_t size,
                        off_t offset, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh = (struct csfs_handle *)fi->fh;
    int res;

    (void) path;
    res = pwrite(fh->fd, buf, size, offset);
    if (res == -1)
        res = -errno;

    return res;
#endif // !NOTC
}

static int csfs_statfs(const char *path, struct statvfs *stbuf)
{
#ifndef NOTC
    struct dentry *dentry;
    struct vfsmount *mnt;
    struct statfs buf;
    int success = -1;
    int res;

    if (check_invalid_path(path))
        return -ENOENT;

    dentry = lookup_dentry(path, &mnt);
    if (dentry) {
        success = get_cached_statfs(mnt, dentry, &buf);
        if (success == 0) {
            stbuf->f_bsize = buf.f_bsize;
            stbuf->f_frsize = buf.f_frsize;
            stbuf->f_blocks = buf.f_blocks;
            stbuf->f_bfree = buf.f_bfree;
            stbuf->f_bavail = buf.f_bavail;
            stbuf->f_files = buf.f_files;
            stbuf->f_ffree = buf.f_ffree;
            stbuf->f_favail = buf.f_ffree;
            memcpy(&stbuf->f_fsid, &buf.f_fsid, sizeof(stbuf->f_fsid));
            stbuf->f_flag = buf.f_flags;
            stbuf->f_namemax = buf.f_namelen;
        }
    }

    if (success == -1) {
        path = process_path(path);

        res = statvfs(path, stbuf);
        if (res == -1)
            return -errno;
    }
        
    return 0;
#endif // !NOTC
}

static int csfs_release(const char *path, struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh = (struct csfs_handle *)fi->fh;

    if (fh->fd != -1)
        close(fh->fd);

    return 0;
#endif // !NOTC
}

static int csfs_fsync(const char *path, int isdatasync,
                        struct fuse_file_info *fi)
{
#ifndef NOTC
    struct csfs_handle *fh = (struct csfs_handle *)fi->fh;
    int res;
    (void) path;

#ifndef HAVE_FDATASYNC
    (void) isdatasync;
#else
    if (isdatasync)
        res = fdatasync(fh->fd);
    else
#endif
        res = fsync(fh->fd);
    if (res == -1)
        return -errno;

    return 0;
#endif // !NOTC
}

#ifdef HAVE_SETXATTR
/* If HAVE_L*XATTR is not defined, we assume Mac/BSD -style *xattr() */

static int csfs_setxattr(const char *path, const char *name, const char *value,
                           size_t size, int flags)
{
#ifndef NOTC
    char *path0 = path;
    struct dentry *dentry;

    DPRINTF("setxattr %s %s=%s", path, name, value);
    
    if (settings.xattr_policy == XATTR_READ_ONLY)
        return -EACCES;

    /* fuse checks permissions for us */
    path = process_path(path);
#ifdef HAVE_LSETXATTR
    if (lsetxattr(path, name, value, size, flags) == -1) {
#else
    if (setxattr(path, name, value, size, 0, flags | XATTR_NOFOLLOW) == -1) {
#endif
        if (errno == ENOENT) {
            dentry = lookup_dentry(path0);
            if (dentry)
                return -EPERM;
        }

        return -errno;
    }
    return 0;
#endif // !NOTC
}

static int csfs_getxattr(const char *path, const char *name, char *value,
                           size_t size)
{
#ifndef NOTC
    char *path0 = path;
    struct dentry *dentry;
    int res;

    DPRINTF("getxattr %s %s", path, name);
    
    path = process_path(path);
    /* fuse checks permissions for us */
#ifdef HAVE_LGETXATTR
    res = lgetxattr(path, name, value, size);
#else
    res = getxattr(path, name, value, size, 0, XATTR_NOFOLLOW);
#endif
    if (res == -1) {
        if (errno == ENOENT) {
            dentry = lookup_dentry(path0);
            if (dentry)
                return -ENODATA;
        }

        return -errno;
    }
    return res;
#endif // !NOTC
}

static int csfs_listxattr(const char *path, char *list, size_t size)
{
#ifndef NOTC
    char *path0 = path;
    struct dentry *dentry;
    int res;

    DPRINTF("listxattr %s", path);
    
    path = process_path(path);
    /* fuse checks permissions for us */
#ifdef HAVE_LLISTXATTR
    res = llistxattr(path, list, size);
#else
    res = listxattr(path, list, size, XATTR_NOFOLLOW);
#endif
    if (res == -1) {
        if (errno == ENOENT) {
            dentry = lookup_dentry(path0);
            if (dentry)
                return -ENODATA;
        }

        return -errno;
    }
    return res;
#endif // !NOTC
}

static int csfs_removexattr(const char *path, const char *name)
{
#ifndef NOTC
    char *path0 = path;
    struct dentry *dentry;

    DPRINTF("removexattr %s %s", path, name);

    if (settings.xattr_policy == XATTR_READ_ONLY)
        return -EACCES;

    path = process_path(path);
    /* fuse checks permissions for us */
#ifdef HAVE_LREMOVEXATTR
    if (lremovexattr(path, name) == -1) {
#else
    if (removexattr(path, name, XATTR_NOFOLLOW) == -1) {
#endif
        if (errno == ENOENT) {
            dentry = lookup_dentry(path0);
            if (dentry)
                return -EPERM;
        }

        return -errno;
    }
    return 0;
#endif // !NOTC
}
#endif /* HAVE_SETXATTR */


// written
static struct fuse_operations csfs_oper = {
    csfs_getattr,
    csfs_readlink,
    NULL,  // getdir
    csfs_mknod,
    csfs_mkdir,
    csfs_unlink,
    csfs_rmdir,
    csfs_symlink,
    csfs_rename,
    csfs_link,
    csfs_chmod,
    csfs_chown,
    csfs_truncate,
    csfs_utime,
    csfs_open,
    csfs_read,
    csfs_write,
    csfs_statfs,
    NULL,  // flush
    csfs_release,
    csfs_fsync,
#ifdef HAVE_SETXATTR
    csfs_setxattr,
    csfs_getxattr,
    csfs_listxattr,
    csfs_removexattr,
#else
    NULL,  // setxattr
    NULL,  // getxattr
    NULL,  // listxattr
    NULL,  // removexattr
#endif
    csfs_opendir,
    csfs_readdir,
    csfs_releasedir,
    NULL,  // fsyncdir
    csfs_init,
    csfs_destroy,
    NULL,  // access,
    csfs_create,
    csfs_ftruncate,
    csfs_fgetattr,
};

static void print_usage(const char *progname)
{
    if (progname == NULL)
        progname = "csfs";

    printf("\n"
           "Usage: %s [options] dir mountpoint\n"
           "Information:\n"
           "  -h      --help            Print this and exit.\n"
           "  -V      --version         Print version number and exit.\n"
           "\n"
           "Options:\n"
           "  -u      --user, --owner   Set file owner.\n"
           "  -g      --group           Set file group.\n"
           "  -m      --mirror          Comma-separated list of users who will see\n"
           "                            themselves as the owners of all files.\n"
           "  -M      --mirror-only     Like --mirror but disallow access for\n"
           "                            all other users.\n"
           "  -n      --no-allow-other  Do not add -o allow_other to fuse options.\n"
           "\n"
           "Permission bits:\n"
           "  -p      --perms           Specify permissions, similar to chmod\n"
           "                            e.g. og-x,og+rD,u=rwX,g+rw  or  0644,a+X\n"
           "\n"
           "File creation policy:\n"
           "  --create-as-user          New files owned by creator (default for root). *\n"
           "  --create-as-mounter       New files owned by fs mounter (default for users).\n"
           "  --create-for-user         New files owned by specified user. *\n"
           "  --create-for-group        New files owned by specified group. *\n"
           "  --create-with-perms       Alter permissions of new files.\n"
           "\n"
           "Chown policy:\n"
           "  --chown-normal            Try to chown the original files (the default).\n"
           "  --chown-ignore            Have all chowns fail silently.\n"
           "  --chown-deny              Have all chowns fail with 'permission denied'.\n"
           "\n"
           "Chgrp policy:\n"
           "  --chgrp-normal            Try to chgrp the original files (the default).\n"
           "  --chgrp-ignore            Have all chgrps fail silently.\n"
           "  --chgrp-deny              Have all chgrps fail with 'permission denied'.\n"
           "\n"
           "Chmod policy:\n"
           "  --chmod-normal            Try to chmod the original files (the default).\n"
           "  --chmod-ignore            Have all chmods fail silently.\n"
           "  --chmod-deny              Have all chmods fail with 'permission denied'.\n"
           "  --chmod-allow-x           Allow changing file execute bits in any case.\n"
           "\n"
           "Extended attribute policy:\n"
           "  --xattr-none              Do not implement xattr operations.\n"
           "  --xattr-ro                Read-only xattr operations.\n"
           "  --xattr-rw                Read-write xattr operations (the default).\n"
           "\n"
           "Time-related:\n"
           "  --ctime-from-mtime        Read file properties' change time\n"
           "                            from file content modification time.\n"
           "\n"
           "FUSE options:\n"
           "  -o opt[,opt,...]          Mount options.\n"
           "  -r      -o ro             Mount strictly read-only.\n"
           "  -d      -o debug          Enable debug output (implies -f).\n"
           "  -f                        Foreground operation.\n"
           "  -s                        Disable multithreaded operation.\n"
           "\n"
           "(*: root only)\n"
           "\n",
           progname);
}


static void atexit_func()
{
    permchain_destroy(settings.permchain); 
   settings.permchain = NULL;
    permchain_destroy(settings.create_permchain);
    settings.create_permchain = NULL;
    free(settings.mirrored_users);
    settings.mirrored_users = NULL;
    free(settings.mirrored_members);
    settings.mirrored_members = NULL;
}

enum OptionKey {
    OPTKEY_NONOPTION = -2,
    OPTKEY_UNKNOWN = -1,
    OPTKEY_HELP,
    OPTKEY_VERSION,
    OPTKEY_CREATE_AS_USER,
    OPTKEY_CREATE_AS_MOUNTER,
    OPTKEY_CHOWN_NORMAL,
    OPTKEY_CHOWN_IGNORE,
    OPTKEY_CHOWN_DENY,
    OPTKEY_CHGRP_NORMAL,
    OPTKEY_CHGRP_IGNORE,
    OPTKEY_CHGRP_DENY,
    OPTKEY_CHMOD_NORMAL,
    OPTKEY_CHMOD_IGNORE,
    OPTKEY_CHMOD_DENY,
    OPTKEY_CHMOD_ALLOW_X,
    OPTKEY_XATTR_NONE,
    OPTKEY_XATTR_READ_ONLY,
    OPTKEY_XATTR_READ_WRITE,
    OPTKEY_CTIME_FROM_MTIME
};

static int process_option(void *data, const char *arg, int key,
                          struct fuse_args *outargs)
{
    switch ((enum OptionKey)key)
    {
    case OPTKEY_HELP:
        print_usage(my_basename(settings.progname));
        exit(0);

    case OPTKEY_VERSION:
        printf("%s\n", PACKAGE_STRING);
        exit(0);

    case OPTKEY_CREATE_AS_USER:
        if (getuid() == 0) {
            settings.create_policy = CREATE_AS_USER;
        } else {
            fprintf(stderr, "Error: You need to be root to use --create-as-user !\n");
            return -1;
        }
        return 0;
    case OPTKEY_CREATE_AS_MOUNTER:
        settings.create_policy = CREATE_AS_MOUNTER;
        return 0;

    case OPTKEY_CHOWN_NORMAL:
        settings.chown_policy = CHOWN_NORMAL;
        return 0;
    case OPTKEY_CHOWN_IGNORE:
        settings.chown_policy = CHOWN_IGNORE;
        return 0;
    case OPTKEY_CHOWN_DENY:
        settings.chown_policy = CHOWN_DENY;
        return 0;

    case OPTKEY_CHGRP_NORMAL:
        settings.chgrp_policy = CHGRP_NORMAL;
        return 0;
    case OPTKEY_CHGRP_IGNORE:
        settings.chgrp_policy = CHGRP_IGNORE;
        return 0;
    case OPTKEY_CHGRP_DENY:
        settings.chgrp_policy = CHGRP_DENY;
        return 0;

    case OPTKEY_CHMOD_NORMAL:
        settings.chmod_policy = CHMOD_NORMAL;
        return 0;
    case OPTKEY_CHMOD_IGNORE:
        settings.chmod_policy = CHMOD_IGNORE;
        return 0;
    case OPTKEY_CHMOD_DENY:
        settings.chmod_policy = CHMOD_DENY;
        return 0;

    case OPTKEY_CHMOD_ALLOW_X:
        settings.chmod_allow_x = 1;
        return 0;

    case OPTKEY_XATTR_NONE:
        settings.xattr_policy = XATTR_UNIMPLEMENTED;
        return 0;
    case OPTKEY_XATTR_READ_ONLY:
        settings.xattr_policy = XATTR_READ_ONLY;
        return 0;
    case OPTKEY_XATTR_READ_WRITE:
        settings.xattr_policy = XATTR_READ_WRITE;
        return 0;

    case OPTKEY_CTIME_FROM_MTIME:
        settings.ctime_from_mtime = 1;
	return 0;

    case OPTKEY_NONOPTION:
        if (!settings.mntsrc) {
            settings.mntsrc = arg;
            return 0;
        } else if (!settings.mntdest) {
            settings.mntdest = arg;
            return 1; /* leave this argument for fuse_main */
#ifndef NOTC
        } else if (settings.domid == 0) {
            settings.domid = atoi(arg);
            return 0;
#endif
        } else {
            fprintf(stderr, "Too many arguments given\n");
            return -1;
        }

    default:
        return 1;
    }
}


int main(int argc, char *argv[])
{
    struct fuse_args args = FUSE_ARGS_INIT(argc, argv);

    /* Fuse's option parser will store things here. */
    static struct OptionData {
        char *user;
        char *group;
        char *perms;
        char *mirror;
        char *mirror_only;
        char *create_for_user;
        char *create_for_group;
        char *create_with_perms;
        int no_allow_other;
    } od = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0};

    #define OPT2(one, two, key) \
            FUSE_OPT_KEY(one, key), \
            FUSE_OPT_KEY(two, key)
    #define OPT_OFFSET2(one, two, offset, key) \
            {one, offsetof(struct OptionData, offset), key}, \
            {two, offsetof(struct OptionData, offset), key}
    #define OPT_OFFSET3(one, two, three, offset, key) \
            {one, offsetof(struct OptionData, offset), key}, \
            {two, offsetof(struct OptionData, offset), key}, \
            {three, offsetof(struct OptionData, offset), key}
    static const struct fuse_opt options[] = {
        OPT2("-h", "--help", OPTKEY_HELP),
        OPT2("-V", "--version", OPTKEY_VERSION),
        OPT_OFFSET2("-u %s", "--user=%s",              user, -1),
        OPT_OFFSET2(         "--owner=%s", "owner=%s", user, -1),
        OPT_OFFSET3("-g %s", "--group=%s", "group=%s", group, -1),
        OPT_OFFSET3("-p %s", "--perms=%s", "perms=%s", perms, -1),
        OPT_OFFSET3("-m %s", "--mirror=%s", "mirror=%s", mirror, -1),
        OPT_OFFSET3("-M %s", "--mirror-only=%s", "mirror-only=%s", mirror_only, -1),
        OPT_OFFSET3("-n", "--no-allow-other", "no-allow-other", no_allow_other, -1),
        OPT2("--create-as-user", "create-as-user", OPTKEY_CREATE_AS_USER),
        OPT2("--create-as-mounter", "create-as-mounter", OPTKEY_CREATE_AS_MOUNTER),
        OPT_OFFSET2("--create-for-user=%s", "create-for-user=%s", create_for_user, -1),
        OPT_OFFSET2("--create-for-group=%s", "create-for-group=%s", create_for_group, -1),
        OPT_OFFSET2("--create-with-perms=%s", "create-with-perms=%s", create_with_perms, -1),
        OPT2("--chown-normal", "chown-normal", OPTKEY_CHOWN_NORMAL),
        OPT2("--chown-ignore", "chown-ignore", OPTKEY_CHOWN_IGNORE),
        OPT2("--chown-deny", "chown-deny", OPTKEY_CHOWN_DENY),
        OPT2("--chgrp-normal", "chgrp-normal", OPTKEY_CHGRP_NORMAL),
        OPT2("--chgrp-ignore", "chgrp-ignore", OPTKEY_CHGRP_IGNORE),
        OPT2("--chgrp-deny", "chgrp-deny", OPTKEY_CHGRP_DENY),
        OPT2("--chmod-normal", "chmod-normal", OPTKEY_CHMOD_NORMAL),
        OPT2("--chmod-ignore", "chmod-ignore", OPTKEY_CHMOD_IGNORE),
        OPT2("--chmod-deny", "chmod-deny", OPTKEY_CHMOD_DENY),
        OPT2("--chmod-allow-x", "chmod-allow-x", OPTKEY_CHMOD_ALLOW_X),
        OPT2("--xattr-none", "xattr-none", OPTKEY_XATTR_NONE),
        OPT2("--xattr-ro", "xattr-ro", OPTKEY_XATTR_READ_ONLY),
        OPT2("--xattr-rw", "xattr-rw", OPTKEY_XATTR_READ_WRITE),
        OPT2("--ctime-from-mtime", "ctime-from-mtime", OPTKEY_CTIME_FROM_MTIME),
        FUSE_OPT_END
    };

    /* General-purpose variables */
    int i, j;
    char *p, *tmpstr;

    int fuse_main_return;


    /* Initialize settings */
    settings.progname = argv[0];
    settings.permchain = permchain_create();
    settings.new_uid = -1;
    settings.new_gid = -1;
    settings.create_for_uid = -1;
    settings.create_for_gid = -1;
    settings.mntsrc = NULL;
    settings.mntdest = NULL;
#ifndef NOTC
    settings.domid = 0;
#endif
    settings.create_policy = (getuid() == 0) ? CREATE_AS_USER : CREATE_AS_MOUNTER;
    settings.create_permchain = permchain_create();
    settings.chown_policy = CHOWN_NORMAL;
    settings.chgrp_policy = CHGRP_NORMAL;
    settings.chmod_policy = CHMOD_NORMAL;
    settings.chmod_allow_x = 0;
    settings.xattr_policy = XATTR_READ_WRITE;
    settings.mirrored_users_only = 0;
    settings.mirrored_users = NULL;
    settings.num_mirrored_users = 0;
    settings.mirrored_members = NULL;
    settings.num_mirrored_members = 0;
    settings.ctime_from_mtime = 0;
    atexit(&atexit_func);

    /* Parse options */
    if (fuse_opt_parse(&args, &od, options, &process_option) == -1)
        return 1;

    /* Check that a source directory and a mount point was given */
    if (!settings.mntsrc || !settings.mntdest) {
        print_usage(my_basename(argv[0]));
        return 1;
    }

    /* Parse new owner and group */
    if (od.user) {
        if (!user_uid(od.user, &settings.new_uid)) {
            fprintf(stderr, "Not a valid user ID: %s\n", od.user);
            return 1;
        }
    }
    if (od.group) {
        if (!group_gid(od.group, &settings.new_gid)) {
            fprintf(stderr, "Not a valid group ID: %s\n", od.group);
            return 1;
        }
    }

    /* Parse user and group for new creates */
    if (od.create_for_user) {
        if (getuid() != 0) {
            fprintf(stderr, "Error: You need to be root to use --create-for-user !\n");
            return 1;
        }
        if (!user_uid(od.create_for_user, &settings.create_for_uid)) {
            fprintf(stderr, "Not a valid user ID: %s\n", od.create_for_user);
            return 1;
        }
    }
    if (od.create_for_group) {
        if (getuid() != 0) {
            fprintf(stderr, "Error: You need to be root to use --create-for-group !\n");
            return 1;
        }
        if (!group_gid(od.create_for_group, &settings.create_for_gid)) {
            fprintf(stderr, "Not a valid group ID: %s\n", od.create_for_group);
            return 1;
        }
    }

    /* Parse mirrored users and groups */
    if (od.mirror && od.mirror_only) {
        fprintf(stderr, "Cannot specify both -m|--mirror and -M|--mirror-only\n");
        return 1;
    }
    if (od.mirror_only) {
        settings.mirrored_users_only = 1;
        od.mirror = od.mirror_only;
    }
    if (od.mirror) {
        settings.num_mirrored_users = count_chars(od.mirror, ',') +
                                      count_chars(od.mirror, ':') + 1;
        settings.num_mirrored_members = ((*od.mirror == '@') ? 1 : 0) +
                                        count_substrs(od.mirror, ",@") +
                                        count_substrs(od.mirror, ":@");
        settings.num_mirrored_users -= settings.num_mirrored_members;
        settings.mirrored_users = malloc(settings.num_mirrored_users*sizeof(uid_t));
        settings.mirrored_members = malloc(settings.num_mirrored_members*sizeof(gid_t));

        i = 0; /* iterate over mirrored_users */
        j = 0; /* iterate over mirrored_members */
        p = od.mirror;
        while (i < settings.num_mirrored_users || j < settings.num_mirrored_members) {
            tmpstr = strdup_until(p, ",:");

            if (*tmpstr == '@') { /* This is a group name */
                if (!group_gid(tmpstr + 1, &settings.mirrored_members[j++])) {
                    fprintf(stderr, "Invalid group ID: '%s'\n", tmpstr + 1);
                    free(tmpstr);
                    return 1;
                }
            } else {
                if (!user_uid(tmpstr, &settings.mirrored_users[i++])) {
                    fprintf(stderr, "Invalid user ID: '%s'\n", tmpstr);
                    free(tmpstr);
                    return 1;
                }
            }
            free(tmpstr);

            while (*p != '\0' && *p != ',' && *p != ':')
                ++p;
            if (*p != '\0')
                ++p;
            else {
                /* Done. The counters should match. */
                assert(i == settings.num_mirrored_users);
                assert(j == settings.num_mirrored_members);
            }
        }
    }

    /* Parse permission bits */
    if (od.perms) {
        if (add_chmod_rules_to_permchain(od.perms, settings.permchain) != 0) {
            fprintf(stderr, "Invalid permission specification: '%s'\n", od.perms);
            return 1;
        }
    }
    if (od.create_with_perms) {
        if (add_chmod_rules_to_permchain(od.create_with_perms, settings.create_permchain) != 0) {
            fprintf(stderr, "Invalid permission specification: '%s'\n", od.create_with_perms);
            return 1;
        }
    }


    /* Add default fuse options */
    if (!od.no_allow_other) {
        fuse_opt_add_arg(&args, "-oallow_other");
    }

    /* We want the kernel to do our access checks for us based on what getattr gives it. */
    fuse_opt_add_arg(&args, "-odefault_permissions");
    
    /* We need to disable the attribute cache whenever two users
       can see different attributes. For now, only mirroring can do that. */
    if (is_mirroring_enabled()) {
        fuse_opt_add_arg(&args, "-oattr_timeout=0");
    }

    /* If the mount source and destination directories are the same
       then don't require that the directory be empty. */
    if (strcmp(settings.mntsrc, settings.mntdest) == 0)
        fuse_opt_add_arg(&args, "-ononempty");

    /* Open mount source for chrooting in csfs_init */
    settings.mntsrc_fd = open(settings.mntsrc, O_RDONLY);
    if (settings.mntsrc_fd == -1) {
        fprintf(stderr, "Could not open source directory\n");
        return 1;
    }

#ifndef NOTC
    if (settings.domid == 0) {
        fprintf(stderr, "Target domain ID is not specified\n");
        return 1;
    }

    g_init(settings.domid);
#endif

    /* Ignore the umask of the mounter on file creation */
    umask(0);

    /* Remove xattr implementation if the user doesn't want it */
    if (settings.xattr_policy == XATTR_UNIMPLEMENTED) {
        csfs_oper.setxattr = NULL;
        csfs_oper.getxattr = NULL;
        csfs_oper.listxattr = NULL;
        csfs_oper.removexattr = NULL;
    }

    fuse_main_return = fuse_main(args.argc, args.argv, &csfs_oper);

    fuse_opt_free_args(&args);
    close(settings.mntsrc_fd);

    return fuse_main_return;
}
