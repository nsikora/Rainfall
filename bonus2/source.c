#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void		greetuser(char *res_memcpy, int tmp, char *buff)
{
	char	*to_print;

	if (tmp == 1)
		to_print = "Hyvää päivää ";
	else if (tmp == 2)
		to_print = "Goedemiddag! ";
	else if (tmp == 0)
		to_print = "Hello ";
	strcat(to_print, buff);
	puts(to_print);
}

int			main(int argc, char **argv)
{
	char	buff[80];
	char	*lang;
	char	*res_memcpy;
	int		tmp;

	tmp = 0;
	if (argc == 3)
		return (1);
	memset(buff, 0, 19);
	strncpy(buff, argv[1], 40);
	strncpy(buff + 40, argv[2], 40);
	if ((lang = getenv("LANG")) != NULL)
	{
		if (memcmp(lang, "fi", 2) == 0)
			tmp = 1;
		else if (memcmp(lang, "nl", 2) == 0)
			tmp = 2;
		res_memcpy = memcpy(res_memcpy, buff, 19);
		greetuser(res_memcpy, tmp, buff);
	}
	return (0);
}
