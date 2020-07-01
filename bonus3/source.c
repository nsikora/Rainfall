#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int			main(int argc, char **argv)
{
	char	buff[136];
	int		at;
	FILE	*fd;

	fd = fopen("/home/user/end/.pass", "r");
	memset(buff, '\0', 33);
	if (fd == NULL)
		return (-1);
	fread(buff, 1, 66, fd);
	buff[89] = '\0';
	at = atoi(argv[1]);
	fread(buff, 1, 65, fd);
	fclose(fd);
	if (strcmp(buff, argv[1]) == 0)
		execl("/bin/sh", "sh", 0);
	else
		puts(buff + 66);
	return (0);
}
