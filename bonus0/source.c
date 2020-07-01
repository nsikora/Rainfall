#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*p(char *str)
{
	char	buff[4104];

	puts(" - ");
	read(0, buff, 4096);
	return (strncpy(str, strchr(buff, '\n'), 20));
}

void	pp(char *str)
{
	char	buff[20];
	char	buff1[20];

	p(buff);
	p(buff1);
	strcpy(str, buff);
	str[strlen(str)] = ' ';
	strcat(str, buff1);
}

int			main()
{
	char	buff[42];

	pp(buff);
	puts(buff);
	return (0);
}
