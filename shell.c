#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	char *stoken;
	int check, i = 0;
	char **arr;
	pid_t child_pid;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		getline(&buffer, &buffer_size, stdin);
		stoken = strtok(buffer, "\t\n");
		arr = malloc(sizeof(char *) * 1024);

		while (stoken)
		{
			arr[i] = stoken;
			stoken = strtok(NULL, "\t\n");
			i++;
		}

			arr[i] = NULL;
			child_pid = fork();

		if (child_pid == 0)
		{
			if (execve(arr[0], arr, NULL) == -1)
				perror(":/");
		}
		else
		{
			wait(&check);
		}
		
		i = 0;
		free(arr);
	}
}
