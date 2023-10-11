#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_parentpid;

    my_parentpid = getppid();
    printf("%u\n", my_parentpid);
    return (0);
}
