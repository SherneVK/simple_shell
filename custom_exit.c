#include "shell.h"

/**
 * custom_exit - Changes the current directory of the process
 * @args: arguments
 *
 * Return: 0.
*/
int custom_exit(char **args)
{
	int status = 0;

	if (args[1] != NULL)
	{
		status =  atoi(args[1]);
	}

	exit(status);
}
