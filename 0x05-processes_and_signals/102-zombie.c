#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - run an infinite loop
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Creates five zombie processes.
 * Return: 0
 */
int main(void)
{
	pid_t pid = fork();
	int i;

	if (pid < 0)
	{
		exit(1);
	}
	else if (pid == 0)
	{
		exit(0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
		}

		infinite_while();
	}

	return (0);
}
