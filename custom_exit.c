#include "shell.h"

/**
 * custom_exit - Changes the current directory of the process
 * @args: arguments
 *
 * Return: 0.
*/
int custom_exit(char **args)
{
	/* exit with status*/
	if (args[1])
	{
		return (atoi(args[1]));
	}
	/* exit success*/
	else
	{
		return (0);
	}
}