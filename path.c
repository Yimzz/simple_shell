#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
void check(char *cc)
{
	if (access(cc, F_OK) == 0)
		printf("%s: FILE:\n", cc);
	else
		printf("%s: :/\n", cc);
}

int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	char *stoken;

	while (1)
	{
		write(1, "cisfun$ ", 8);
		getline(&buffer, &buffer_size, stdin);
		stoken = strtok(buffer, " \t\n");
		if (strcmp(stoken, "which") == 0)
		{
			stoken = strtok(NULL, " \t\n");
			while (stoken)
				check(stoken);
				stoken = strtok(NULL, "\t\n");
		}
		else
		{
			write(1, ":/\n", 23);
		}
	}
	return (0);
}
