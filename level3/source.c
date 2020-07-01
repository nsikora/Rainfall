void	v(void)
{
	char	k[520];

	fgets(k, 0x200, stdin);
	printf(k);
	if (m == 0x40)
	{
		fwrite("Wait, what ?!\n", 1, 0xc, stdout);
		system("bin/sh");
	}
	return ;
}

int		main()
{
	v();
	return ;
}
