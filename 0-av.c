#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;

	printf("argv content is argv[]\n");

	while (*av)
		printf("%s\n", *av++);

	return (0);
}
