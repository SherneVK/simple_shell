#include "shell.h"

/**
 * exec - map if command is a builtin or a process
 * @args: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int exec(char **args)
{
	if (args[0] == NULL)
	{
		return (-1);
	}

	if (strcmp(args[0], "exit") == 0)
	{
		exit(0);
	}

	return (process(args));
}
