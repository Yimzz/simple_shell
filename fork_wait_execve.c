#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	int i;
	char *arg[] = {"ls", "-l", "/tmp", NULL};
	int check;

	for (i = 1; i <= 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror(":/");
			return (1);
		}
	}
	if (child_pid == 0)
	{
		execve("/usr/bin/ls", arg, NULL);
		perror(":/");
		exit(1);
	}
	else
	{
		wait(&check);
	}
}
