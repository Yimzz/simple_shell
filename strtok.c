#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - An entry main function
  * Return: Always 0 (Success)
  */

int main(void)
{
	char *str = "Strtok example";
	char *strc = malloc(sizeof(char) * strlen(str));
	char del[5] = " ";
	char *trunks;
	int i;

	strcpy(strc, str);
	trunks = strtok(strc, del);
	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, del);
	}

	for (i = 0; i < 15; i++)
	{
		if (strc[i] == '\0')
			printf("\\0");
		else
			printf("%c", strc[i]);
	}
	return (0);
}
