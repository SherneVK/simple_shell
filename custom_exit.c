#include "shell.h"

/**
 * custom_exit - Changes the current directory of the process
 * @args: arguments
 *
 * Return: 0.
*/
int custom_exit(char **args)
{
	if (args[1] != NULL)
	{
		return (atoi(args[1]));
	}
	else
	{
		return (0);
	}
}
