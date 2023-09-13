#include "shell.h"

/**
 * exec - executes commands
 * @args: arguments
 *
 * Return: Always 0.
*/
int exec(char **args)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("./shell");
			exit(1);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}