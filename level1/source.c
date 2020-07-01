#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>

void		run(void)
{
	char	str[] = "Good... Wait what?\n";
	
	fwrite(str, sizeof(str), 1, 1);
	system("/bin/sh");
	return ;
}

void		frame_dummy(void)
{
	return;
}

int			main()
{
	char	b [76];	
	gets(b);	
	return ;
}
