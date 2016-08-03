/*
 *  linux/fs/ext3/symlink.c
 *
 * Only fast symlinks left here - the rest is done by generic code. AV, 1999
 *
 * Copyright (C) 1992, 1993, 1994, 1995
 * Remy Card (card@masi.ibp.fr)
 * Laboratoire MASI - Institut Blaise Pascal
 * Universite Pierre et Marie Curie (Paris VI)
 *
 *  from
 *
 *  linux/fs/minix/symlink.c
 *
 *  Copyright (C) 1991, 1992  Linus Torvalds
 *
 *  ext3 symlink handling code
 */

#include <linux/fs.h>
#include <linux/jbd.h>
#include <linux/ext3_fs.h>
#include <linux/namei.h>
#include "xattr.h"

#ifdef NOTC
static
#endif
void * ext3_follow_link(struct dentry *dentry, struct nameidata *nd)
{
	struct ext3_inode_info *ei = EXT3_I(dentry->d_inode);
#ifdef NOTC
	nd_set_link(nd, (char*)ei->i_data);
#else
	nd_set_link(nd, kdata((char*)ei->i_data));
#endif
	return NULL;
}

#ifdef NOTC

const struct inode_operations ext3_symlink_inode_operations = {
	.readlink	= generic_readlink,
	.follow_link	= page_follow_link_light,
	.put_link	= page_put_link,
#ifdef CONFIG_EXT3_FS_XATTR
	.setxattr	= generic_setxattr,
	.getxattr	= generic_getxattr,
	.listxattr	= ext3_listxattr,
	.removexattr	= generic_removexattr,
#endif
};

const struct inode_operations ext3_fast_symlink_inode_operations = {
	.readlink	= generic_readlink,
	.follow_link	= ext3_follow_link,
#ifdef CONFIG_EXT3_FS_XATTR
	.setxattr	= generic_setxattr,
	.getxattr	= generic_getxattr,
	.listxattr	= ext3_listxattr,
	.removexattr	= generic_removexattr,
#endif
};

#endif // NOTC
