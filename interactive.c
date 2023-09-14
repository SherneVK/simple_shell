#include "shell.h"

/**
 * interactive_mode - comman line interpreter
 *
 * Return: nothing
 */
void interactive_mode(void)
{
	char *lineptr;
	char **args;
	int status = -1;

	do {
		printf("#cisfun$ ");
		lineptr = read_line();
		args = tokenize(lineptr);
		status = exec(args);
		free(lineptr);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}
