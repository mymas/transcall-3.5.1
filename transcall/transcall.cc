#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <sys/resource.h>
#include <sys/stat.h>

#include <linux/types.h>
#include <dirent.h>
#include <linux/unistd.h>
#include <linux/utsname.h>
#include <sys/socket.h>
#include <linux/if.h>
#include <sys/ioctl.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stddef.h>
#include <signal.h>
#include "transcall.h"
#include "addr.h"

#define MAX_PATH 256
#define DB_SIZE 100
#define GETCWD 1001
#define WRITE 1002
#define UNAME 1003
#define ARRAY 5

//#define DEB
//#define DEBUG

#if defined(DEB) || defined(DEBUG)
#include "syscall_64.h"
FILE *debug_fp;
#endif

struct DB{
	char base[MAX_PATH];
	char trans[MAX_PATH];
};

union trace{
	long data;
	char str[4];
};

int flag;
int getd;
int proc_num;
int cnt = 0;
char rootdir[MAX_PATH];
char now_dir[MAX_PATH] = "[domU /] ";
char *array_path[ARRAY]={
	"/dev",
        "/proc/loadavg",
        NULL
};
struct DB db[DB_SIZE];
unsigned long old;

char prog[256];

void read_policy_file(void)
{
	FILE *fp;
	int i;
	char base[51], trans[51];
	fp = fopen("mapping.cfg", "r");
	if(fp == NULL){
		printf("no mapping file\n");
                return;
	}

	while(fscanf(fp, "%s %s", db[cnt].base, db[cnt].trans) != EOF){
		cnt++;
	}
	fclose(fp);
}

int check_db(char *buf)
{
	int i,j;
	char *p, tmp[MAX_PATH];

        i = 0;
        while (array_path[i]) {
            int len = strlen(array_path[i]);

            if (strlen(buf) >= len)
                if (strncmp(buf, array_path[i], len) == 0)
                    return 0;

            i++;
	}

	memset(tmp, '\0', sizeof(tmp));
	if(strlen(buf) >= strlen(rootdir)){
		memset(tmp, '\0', sizeof(tmp));
		strncpy(tmp, buf, strlen(rootdir));
		if(!strcmp(tmp, rootdir))
			return 0;
	}

	for(i = 0; i < cnt; i++){
		if(strlen(buf) < strlen(db[i].base))
			continue;
		else
		{
			memset(tmp, '\0', sizeof(tmp));
			strncpy(tmp, buf, strlen(db[i].base));
			if(!strcmp(tmp, db[i].base)){
				memset(tmp, '\0', sizeof(tmp));
				if(strlen(buf) < strlen(db[i].trans))
                                    sprintf(tmp, "%s", db[i].trans);
				else
					sprintf(tmp, "%s%s", db[i].trans, &buf[strlen(db[i].base)]);
				strcpy(buf, tmp);
				return 1;
			}
		}
	}

	memset(tmp, '\0', sizeof(tmp));
	if(buf[0] == '/'){
		if(buf[1] == '/')
			sprintf(tmp, "%s%s", rootdir, &buf[1]);
		else
			sprintf(tmp, "%s%s", rootdir, buf);
		strcpy(buf, tmp);
		return 1;
	}

	return 0;
}

// for compatibility of filesystem
struct DB bin_db[DB_SIZE];
int bin_cnt = 0;

void read_policy_file2(void)
{
    FILE *fp;

    if ((fp = fopen("mapping2.cfg", "r")) == NULL) {
        printf("no mapping file 2\n");
        return;
    }

    while (fscanf(fp, "%s %s", bin_db[bin_cnt].base, bin_db[bin_cnt].trans)
           != EOF)
        bin_cnt++;

    fclose(fp);
}

char *check_bin_db(char *filename)
{
    int i;

    for (i = 0; i < bin_cnt; i++) {
        if (strcmp(filename, bin_db[i].base) == 0)
            return bin_db[i].trans;
    }

    return NULL;
}

int ptrace_setstring_over(int pid, char *str, long child_addr, int length)
{
    int counter, i;
    int length_r;
    long data;
    char *data2;

    length++;  // nul char
    length_r = length / sizeof(long) * sizeof(long);  // round down

    for (counter = 0; counter < length_r; counter += sizeof(long)) {
        if(ptrace(PTRACE_POKETEXT, pid, (void*)(child_addr+counter),
                  *(long *)&str[counter]) == -1){
            perror("PTRACE_POKETEXT");
            return 1;
        }
    }

    if (length > length_r) {
        data = ptrace(PTRACE_PEEKTEXT, pid, (void*)(child_addr + length_r),
                      NULL);
        data2 = (char *)&data;
        for (i = 0; i < length - length_r; i++)
            data2[i] = str[length_r + i];
        if (ptrace(PTRACE_POKETEXT, pid, (void*)(child_addr + length_r), data)
            == -1) {
            perror("PTRACE_POKETEXT");
            return 1;
        }
    }
                 
    return 0;
}

unsigned long ptrace_setstring(int pid, char *str, unsigned long rsp, int length)
{
    int counter;

    length++;  // nul char

    for (counter = 0; counter < length; counter += sizeof(long)) {
        if (ptrace(PTRACE_POKETEXT, pid, (void*)(rsp - length - 100 + counter),
                   *(long *)&str[counter]) == -1){
            perror("PTRACE_POKETEXT");
            return 1;
        }
    }

    return rsp - length - 100;
}

int ptrace_getstring(int pid, char *str, long child_addr, int length)
{
    long data;
    char* tmp;
    int counter, i;

    for (counter = 0; counter < length; counter += sizeof(long)) {
        data = ptrace(PTRACE_PEEKTEXT, pid, (void*)(child_addr + counter),
                      NULL);
        tmp = (char*)&data;
        for (i = 0; i < sizeof(long); i++) {
            if (counter + i == length - 1) {
                str[counter + i] = 0;
                return 0;
            }
            str[counter + i] = tmp[i];
            if (tmp[i] == 0)
                return 0;
        }
    }

    return 1;
}

int ptrace_setdata_over(int pid, char *data, long child_addr, int length)
{
    return ptrace_setstring_over(pid, data, child_addr, length);
}

int ptrace_getdata(int pid, char *data, long child_addr, int length)
{
    int counter, i;
    long data2;
    char *tmp;

    for (counter = 0; counter < length; counter += sizeof(long)) {
        data2 = ptrace(PTRACE_PEEKTEXT, pid, (void*)(child_addr + counter),
                       NULL);
        tmp = (char *)&data2;
        for (i = 0; i < sizeof(long); i++) {
            if (counter + i == length)
                break;
            data[counter + i] = tmp[i];
        }
    }

    return 1;
}

int hook_rename(pid_t pid, struct user_regs_struct *regs)
{
	char from[256], to[256];
	static unsigned long old_from, old_to;


	switch(regs->rax){
		case -ENOSYS:

			if(ptrace_getstring(pid, from, regs->rdi, 256)){
				perror("ptrace_getstring:rename");
				return -1;
			}

			check_db(from);

			old_from = regs->rdi;
			regs->rdi = ptrace_setstring(pid, from, regs->rsp, strlen(from));

			if(ptrace_getstring(pid, to, regs->rsi, 256)){
				perror("ptrace_getstring:rename");
				return -1;
			}

			check_db(to);

			old_to = regs->rsi;
			regs->rsi = ptrace_setstring(pid, to, regs->rsp - strlen(from) - 10, strlen(to));

			ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
			break;

		default:
			regs->rdi = old_from;
			regs->rsi = old_to;
			ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
			break;
	}

	return 0;
}

int hook_uname(pid_t pid, struct user_regs_struct *regs)
{
	FILE *fp;
	static struct new_utsname name;
	static int check = 0;
	char *p;

	if(check == 0){ 
            emulate_uname(&name);
            check++;
	}

        ptrace_setdata_over(pid, (char *)&name, regs->rdi, sizeof(name));

	flag = UNAME;

	return 0;
}

struct net_if {
    char name[IFNAMSIZ];
    short flags;
    int ifindex;
};

int hook_ioctl(pid_t pid, struct user_regs_struct *regs)
{
    static int check = 0;
    static struct net_if nif[64];
    static int n = 0;
    unsigned long cmd, arg;
    FILE *fp;
    struct ifconf ifc;
    struct ifreq ifr, *ifrp;
    int ifc_len, i;
    char ifname[IFNAMSIZ];

    // XXX check if fd is a socket

    cmd = regs->rsi;
    arg = regs->rdx;

    switch (cmd) {
    case SIOCGIFCONF:
    case SIOCGIFFLAGS:
    case SIOCGIFINDEX:
        if (check == 0) {
            n = emulate_dev_ioctl(nif, 64);

            while (n < 64) {
                if (fscanf(fp, "%s %hd %d", nif[n].name, &nif[n].flags,
                           &nif[n].ifindex) == EOF)
                    break;

                /*
                printf("%s %hd %d\n", nif[n].name, nif[n].flags,
                       nif[n].ifindex);
                */
            
                n++;
            }

            check = 1;
        }
    }

    // ignore before executing the syscall
    // XXX how to avoid calling ioctl?
    if (regs->rax == -ENOSYS)
        return 0;

    switch (cmd) {
    case SIOCGIFCONF:
        ptrace_getdata(pid, (char *)&ifc, (long)arg, sizeof(ifc));

        // XXX check ifc->ifc_len before syscall execution

        ifrp = ifc.ifc_req;

        for (i = 0; i < n; i++) {
            ptrace_setstring_over(pid, nif[i].name, (long)ifrp->ifr_name,
                                  sizeof(ifrp->ifr_name));
            ifrp++;
        }

        ifc.ifc_len = sizeof(struct ifreq) * n;
        ptrace_setdata_over(pid, (char *)&ifc, (long)arg, sizeof(ifc));
        break;

    case SIOCGIFFLAGS:
    case SIOCGIFINDEX:
        ptrace_getdata(pid, (char *)&ifr, (long)arg, sizeof(ifr));

        printf("ifr_name: %s\n", ifr.ifr_name);

        for (i = 0; i < n; i++) {
            if (strcmp(ifr.ifr_name, nif[i].name) == 0) {
                if (cmd == SIOCGIFFLAGS) {
                    ifr.ifr_flags = nif[i].flags;
                    printf("found: %d\n", ifr.ifr_flags);
                }
                else {
                    ifr.ifr_ifindex = nif[i].ifindex;
                    printf("found': %d\n", ifr.ifr_ifindex);
                }
                break;
            }
        }

        if (i == n) {
            regs->rax = -EINVAL;
            ptrace(PTRACE_SETREGS, pid, NULL, regs);
            return 0;
        }

        ptrace_setdata_over(pid, (char *)&ifr, (long)arg, sizeof(ifr));

        regs->rax = 0;
        ptrace(PTRACE_SETREGS, pid, NULL, regs);
        break;
    }

    return 0;
}

int hook_getprio(pid_t pid, struct user_regs_struct *regs)
{
	char str[256];
	static unsigned long old;
	static int res = 0;
	static unsigned long mem_rip;

	// if(strstr(str, "/proc")) return 0;

	switch(regs->rax){
		case -ENOSYS:
#ifdef DEB
			fprintf(debug_fp, "%s: %ld %ld", name[regs->orig_rax], regs->rdi, regs->rsi);
#endif
			if(regs->rdi == PRIO_PROCESS) {
				old = regs->rsi;
				regs->rsi = 99999;
				ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
				res = 1;
			}
			break;

		default:
#ifdef DEB
			fprintf(debug_fp, " = %ld\n", regs->rax);
#endif
			if(res != 0){
				regs->rsi = old;
				ptrace(PTRACE_SETREGS, pid, NULL, regs);
				res = 0;
			}
			break;
	}

	return 0;
}

static unsigned long ldso_start[65536];
static unsigned long ldso_end[65536];

int check_ldso_addr(pid_t pid, unsigned long addr)
{
    char path[256], line[256];;
    FILE *fp;
    char *start, *end;

    //printf("addr: %lx\n", addr);

    if (ldso_start[pid] == 0) {
        sprintf(path, "/proc/%d/maps", pid);

        if ((fp = fopen(path, "r")) != NULL) {
            while (fgets(line, 256, fp) != NULL) {
                // XXX
                if (strstr(line, "ld-")) {
                    start = strtok(line, "-");
                    ldso_start[pid] = strtoul(start, NULL, 16);

                    end = strtok(NULL, " ");
                    ldso_end[pid] = strtoul(end, NULL, 16);

                    //printf("%lx-%lx\n", ldso_start[pid], ldso_end[pid]);
                    break;
                }
            }

            fclose(fp);
        }
        else
            perror("open maps file");
    }
    
    if (addr >= ldso_start[pid] && addr <= ldso_end[pid])
        return 1;
    else
        return 0;
}    

int arg_num1(pid_t pid, struct user_regs_struct *regs) {
	char str[256];
	static unsigned long old;
	static int res;
	static unsigned long mem_rip;
	// if(strstr(str, "/proc")) return 0;

	switch(regs->rax){
		case -ENOSYS:
			if(!regs->rdi) return 1;
			if(ptrace_getstring(pid, str, regs->rdi, 256)){
				perror("ptrace_getstring:arg_num1");
				return -1;
			}
			if(strstr(str, "ld.so.")){
                            //printf("ld.so: %s\n", str);
                            break;
			}
                        else if(strstr(str, ".so")){
                            if (check_ldso_addr(pid, regs->rip) == 1) {
                                //printf("host so: %s\n", str);
                                break;
                            }
                            //printf("guest so: %s\n", str);
			}
                        else if (strcmp(str, prog) == 0) {
                            //printf("open script\n");
                            prog[0] = '\0';
                            break;
                        }

			res = check_db(str);
#ifdef DEB
			fprintf(debug_fp, "%s: %s ", name[regs->orig_rax], str);
#endif

			if(res != 0){
				old = regs->rdi;
				regs->rdi = ptrace_setstring(pid, str, regs->rsp, strlen(str));
				ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
//				ptrace_getstring(pid, str, regs->rdi, 256);
			}
			break;

		default:
			if(res != 0){
				regs->rdi = old;
				ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
				res = 0;
			} 
#ifdef DEB
			fprintf(debug_fp, " = %ld\n", regs->rax);
#endif
	break;
	}

	return 0;
}

int arg_num2(pid_t pid, struct user_regs_struct *regs)
{
	char str[256];
	static unsigned long old;
	static int res;

	//  if(strstr(str, "/proc")) return 0;   

	switch(regs->rax){
		case -ENOSYS:
			if(!regs->rsi) return 1;
			if(ptrace_getstring(pid, str, regs->rsi, 256)){
				perror("ptrace_getstring:arg_num2");
				return -1;
			}

			res = check_db(str);
#ifdef DEB
			fprintf(debug_fp, "%s: %s\n", name[regs->orig_rax], str);
#endif

			if(res != 0){
				old = regs->rsi;
				regs->rsi = ptrace_setstring(pid, str, regs->rsp, strlen(str));
				ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
			}
			break;

		default:
			if(res != 0){
				regs->rsi = old;
				ptrace(PTRACE_SETREGS, pid, NULL, regs);  //レジスタの情報を書き戻す
				res = 0;
			}
			break;
	}

	return 0;
}

int hook_getcwd(pid_t pid, struct user_regs_struct *regs)
{
	char str[256];
	if(ptrace_getstring(pid, str, regs->rdi, 256)){
		perror("ptrace_getstring:getcwd");
		return -1;
	}

#ifdef DEB
	fprintf(debug_fp, "%s: %s\n", name[regs->orig_rax], &str[strlen(rootdir)]);
#endif

        if (strcmp(str, rootdir) == 0)
            ptrace_setstring_over(pid, "/", regs->rdi, 1);	
	else if(strstr(str, rootdir))
            ptrace_setstring_over(pid, &str[strlen(rootdir)], regs->rdi,
                                  strlen(&str[strlen(rootdir)]));	

	return 0;
}

int hook_read(pid_t pid, struct user_regs_struct *regs)
{
	char str[256];
	static char string[5];
	char *c;
	long data;

	switch(regs->rax){
		case -ENOSYS:
			break;

		default:
			data = ptrace(PTRACE_PEEKTEXT, pid, regs->rsi, NULL);
			c = (char *)&data;
			fprintf(stderr, "%c\n", *c);
			break;

	}

	return 0;
}

int hook_execve(pid_t pid, struct user_regs_struct *regs)
{
    FILE *fp;
    char header[2];
    static unsigned long old = 0;
    struct stat st;
    char *str;

    if (regs->rax == -ENOSYS) {
        ptrace_getstring(pid, prog, regs->rdi, 256);
        //fprintf(stderr, "execve: %s\n", prog);

        // no replacement if existing
        if (stat(prog, &st) == 0)
            return 0;

        str = check_bin_db(prog);
        if (str) {
            strcpy(prog, str);
            //printf("replace exec file: %s\n", prog);

            old = regs->rdi;
            regs->rdi = ptrace_setstring(pid, prog, regs->rsp, strlen(prog));
            ptrace(PTRACE_SETREGS, pid, NULL, regs);
        }
    }
    else {
        if (regs->rax == 0 && prog[0] != '\0') {
            //fprintf(stderr, "execve'd: %s\n", prog);
        
            if ((fp = fopen(prog, "r")) == NULL)
                prog[0] = '\0';
            else {
                // check script
                fread(header, 2, 1, fp);
                if (strncmp(header, "#!", 2) != 0)
                    prog[0] = '\0';
                /*
                else
                    printf("script: %s\n", prog);
                */
                
                fclose(fp);
            }
        
            // memory layout is changed by execve
            ldso_start[pid] = ldso_end[pid] = 0;
        }
    }

    return 0;
}

int func_hook(pid_t pid, char *path)
{
    struct user_regs_struct regs;
    int syscall;
    char str[256];
    char *p;
    static int w = 0;
    static unsigned long old;

    if (ptrace(PTRACE_GETREGS, pid, NULL, &regs) == -1) {
        perror("PTRACE_GETREGS");
        return 1;
    }

    syscall = regs.orig_rax;

#ifdef DEBUG
    if(regs.rax == -ENOSYS)
        fprintf(debug_fp, "%5d: %s\n", pid, name[syscall]);
    else
        fprintf(debug_fp, "  %s = %d\n", name[syscall], (int)regs.rax);
#endif

    switch (syscall) {
/*	
    case __NR_open: //open(const char *pathname, int flags);
        if (open_hook(pid, &regs) == -1) {
            perror("open hook");
            return -1;
        }
        break;
*/

    case __NR_open: //open(const char *pathname, int flags);
    case __NR_stat: //stat(const char *path, struct stat *buf);
    case __NR_lstat: //lstat(const char *path, struct stat *buf);
    case __NR_access: //access(const char *pathname, int mode);
    case __NR_readlink://readlink(const char *path, char *buf, size_t bufsiz);
    case __NR_unlink:
    case __NR_chdir: //chdir(const char *path);
    case __NR_statfs: //statfs(const char *path, struct statfs *buf);
    case __NR_mkdir:
    case __NR_rmdir:
    case __NR_chmod:
    case __NR_chown: 
    case __NR_utime:
        
    case __NR_lgetxattr:

    case __NR_utimes:
    case __NR_lchown:
        if (arg_num1(pid, &regs) == -1) {
            perror("arg_num1");
            return -1;
        }
        break;

    case __NR_openat:
    case __NR_unlinkat:
    case __NR_newfstatat:
    case __NR_utimensat:
    case __NR_fchmodat:
    case __NR_fchownat:
        if (arg_num2(pid, &regs) == -1) {
            perror("arg_num2");
            return -1;
        }
        break;
        
    //case __NR_execve:
    //    break;

    case __NR_execve: //execve(const char *filename, char *const argv[]);
        if (hook_execve(pid, &regs) == -1)
            return -1;
        break;
        
    case __NR_uname:
        if (hook_uname(pid, &regs)) {
            perror("hook_uname");
            return -1;
        }
        break;

    case __NR_getcwd: //getcwd(char *buf, size_t size);
        if (regs.rax != -ENOSYS) {
            hook_getcwd(pid, &regs);
        }
        break;
        
    case __NR_getpriority: //getpriority(int which, int who)
        if (hook_getprio(pid, &regs)) {
            perror("getpriority");
            return -1;
        }
        break;

    case __NR_rename: //rename(const char *oldpath, const char *newpath);
    case __NR_link:
    case __NR_symlink:
        if (hook_rename(pid, &regs)) {
            perror("hook_rename");
            return -1;
        }
        break;
        
    case __NR_ioctl:
        if (hook_ioctl(pid, &regs)) {
            perror("hook_ioctl");
            return -1;
        }
        break;
        
    default:
        break;
    }

    return 0;
}

static int proc_start[65536];

int parent_main(pid_t pid, char *path)
{
    pid_t child;
    int status, sig;
    int result;
    int flags = 0;

    while (1) {
        child = waitpid(-1, &status, WUNTRACED | WCONTINUED | __WALL);
        if (child == -1) {
            perror("waitpid");
            return 1;
        }
        
        sig = 0;
        
        if (WIFEXITED(status)) {
            if(child != pid) {
                ptrace(PTRACE_DETACH, child, NULL, NULL);
                continue;
            }
            //fprintf(stderr, "%5d: exited, st:%d\n", child,
            //        WEXITSTATUS(status));
            break;
        }
        else if (WIFSIGNALED(status)) {
            //fprintf(stderr, "%5d: signaled, sig:%d, core:%s\n", child,
            //        WTERMSIG(status), (WCOREDUMP(status)) ? "yes": "no");
            if(child != pid){
                sig = WTERMSIG(status);
                goto send_signal;
            }
            break;
        }
        else if (WIFSTOPPED(status)) {
            if (WSTOPSIG(status) == SIGTRAP) {
                //trap
                result = func_hook(child, path);
                if (result) {
                    if(child != pid){
                        sig = SIGTRAP;
                        goto send_signal;
                    }
                    fprintf(stderr, "%5d: hook failed.\n", child);
                    return 1;
                }	
            }
            else {
                //not trap
                //fprintf(stderr, "%5d: stopped, sig:%d\n", child,
                //        WSTOPSIG(status));
                if(flags == 0){
                    ptrace(PTRACE_SETOPTIONS, pid, NULL,
                           PTRACE_O_TRACEEXEC | PTRACE_O_TRACECLONE |
                           PTRACE_O_TRACEVFORK | PTRACE_O_TRACEFORK);
                    flags++;
                }
                sig = WSTOPSIG(status);
                
                if (sig == SIGSTOP && proc_start[child] == 0) {
                    sig = 0;
                    proc_start[child] = 1;
                }
            }
        }
        else if (WIFCONTINUED(status)) {
            fprintf(stderr, "%5d: continued.\n", child);
        }
        else {
            fprintf(stderr, "%5d: illegal status %d.", 
                    child, status);
            return 1;
        }

send_signal:
        result = ptrace(PTRACE_SYSCALL, child, NULL, sig);
/*
        if (result == -1) {
            perror("ptrace(PTRACE_SYSCALL, ...)");
            return 1;
        }
*/
    }

    ptrace(PTRACE_DETACH, child, NULL, NULL);

    return 0;
}

int child_main(char *filename, char *argv[])
{
    int result;

    ptrace(PTRACE_TRACEME, 0, NULL, NULL);
    if (kill(getpid(), SIGSTOP))
        perror("kill");
    result = execvp(filename, argv);
    if (result) {
        perror("execvp");
        return result;
    }

    printf("[bug] never reached here.\n");
    return 0;
}

int main(int argc, char *argv[])
{
    char *dir;
    int domid;
    char *filename;
    pid_t pid;
    int result;

    if (argc < 3) {
        fprintf(stderr, "usage: transcall dir domid command\n");
        return 0;
    }

    dir = argv[1];
    domid = atoi(argv[2]);
    filename = argv[3];

#if defined(DEB) || defined(DEBUG)
    debug_fp = fopen("/tmp/transcall.log", "a");
    if (debug_fp == NULL) {
        perror("fopen for debug");
        exit(1);
    }
#endif

    read_policy_file();
    read_policy_file2();
    chdir(dir);
    getcwd(rootdir, MAX_PATH);

    g_init(domid);

    pid = fork();
    if (pid) {
        //parent
        result = parent_main(pid, filename);
    }
    else {
        //child
        result = child_main(filename, &argv[3]);
    }

    g_exit();

    return result;
}
