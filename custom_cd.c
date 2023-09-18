#include "shell.h"

/**
 * custom_cd - Changes the current directory of the process
 * @args: target
 *
 * Return: 1 (Sucess). Otherwise 0.
*/
int custom_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "Argument expected to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("Error in custom_cd.c: changing directory\n");
		}
	}
	return (-1);
}