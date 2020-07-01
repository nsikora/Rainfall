
int main(int ac, char ** av)
{
	char *input;
	char *auth;
	char *service;

	while (true)
	{
		printf("%p, %p \n", auth, service);
		if (fgets(input, 0x80, 0))
		{
			if (strncmp("auth ", input, 5) == 0)
			{   // repz cmpsb %es:(%edi),%ds:(%esi)
				auth = (char*)malloc(4)
				auth2 = (input+5);
				if (strlen(auth2) < 30)         // repnz scas %es:(%edi),%al
					strcpy((input + 5), auth);
			}
			else if (strncmp("reset", input, 5) == 0)
				free(auth);
			else if (strncmp("service", input, 6) == 0)
				service = strdup(input+7);
			else if (strncmp("login", input, 5) == 0)
			{
				if (&auth + 32 != 0)
					system("/bin/sh");
				else
					fwrite("Password:\n", 1, 10, 1);
			}
		}
	}
	return (0);
}
