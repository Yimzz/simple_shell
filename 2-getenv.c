#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_getenv(const char *name)
{
	extern char **environ;
	int i = 0;
	char *stoken;

	while(environ[i])
	{
		stoken = strtok(environ[i], "=");
		if (strcmp(stoken, name) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return (NULL);
}

void main(void)
{
	char *myvalue = getenv("HOME");

	printf("%s\n", myvalue);
}
