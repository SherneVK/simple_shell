#include "shell.h"

/**
 * custom_env - prints the current environment
 * @args: arguments
 *
 * Return: 1 (Success). Otherwise 0.
*/
int custom_env(__attribute__((unused))char **args)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (-1);
}
