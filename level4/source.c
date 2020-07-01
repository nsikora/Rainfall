#include <stdio.h>

void		p(char *buff)
{
	printf(buff);
}

void		n()
{
	char	buff[520];

	fgets(buff, 512, 0);
	p(buff);
	if (0 == 0x1025544)
		system("/bin/cat /home/user/level5/.pass");
}

int			main()
{
	n();
	return (0);
}
