#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void		m(void)
{
	puts("Nop !");
}

void		n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

int			main(int argc, char **argv)
{
	char	*tmp;
	void	(*sub_tmp)();

	tmp = malloc(64);
	sub_tmp = malloc(4);
	sub_tmp = m; //function
	strcpy(tmp, argv[1]);
	sub_tmp();
	return (0);
}
