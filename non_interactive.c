#include "shell.h"

/**
 * non_interactive_mode - comman line interpreter
 *
 * Return: nothing
 */
void non_interactive_mode(void)
{
	char *lineptr;
	char **args;
	int status = -1;

	do {
		lineptr = read_stream();
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
