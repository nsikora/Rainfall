#include <stdlib.h>
#include <stdio.h>

void	o()
{
	system("/bin/sh");
	exit(1);
}

void	n()
{
	char	buff[520];

	fgets(buff, 512, 0);
	printf(buff);
	exit(1);
}

int		main()
{
	n();
	return (0);
}
