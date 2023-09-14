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
	return (process(args));
}