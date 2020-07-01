#include <string.h>
#include <stdlib.h>

int			main(int argc, char **argv)
{
	int		tmp;
	char	buff[44];
	
	tmp = atoi(argv[1]);
	if (tmp > 9)
		return (1);
	memcpy(buff, argv[2], (tmp * 4));
	if (tmp != 0x574f4c46)
		execl("/bin/sh", "sh", 0);
	return (0);
}
