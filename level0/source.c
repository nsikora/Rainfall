#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int			main(int argc, char **argv)
{
	char	*str;
	gid_t	gid;
	uid_t	uid;

	if (atoi(argv[0]) == 423)
	{
		str = strdup(argv[0]);
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", &str);
	}
	else
		write(1, "No !\n", 5);
	return (0);
}
