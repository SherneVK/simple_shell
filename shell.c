#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n = 0;
	char *lineptr = NULL, **args;
	ssize_t read;
	int interactive = isatty(STDIN_FILENO);

	if (interactive)
	{
		while (1)
		{
			write(1, "#cisfun$ ", 9);
			read = getline(&lineptr, &n, stdin);
			if (read == -1)
			{
				write(1, "\n", 1);
				free(lineptr);
				exit(0);
			}
			lineptr[read - 1] = '\0';
			args = tokenize(lineptr);
			if (args[0] == NULL)
				continue;

			exec(args);
		}
	}
	else
	{
		while (getline(&lineptr, &n, stdin) > 0)
		{
			args = tokenize(lineptr);
			if (args[0] == NULL)
				continue;

			exec(args);
		}
		free(lineptr);
	}
	return (0);
}