#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*p()
{
	int		tmp;
	char	buff[76];

	fflush(stdout);
	gets(buff);
	if ((tmp & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)", &tmp);
		exit(1);
	}
	puts(buff);
	return (strdup(buff));
}

int			main()
{
	p();
	return (0);
}
