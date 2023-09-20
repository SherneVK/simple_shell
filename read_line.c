#include "shell.h"

/**
 * read_line - read a line from stream
 *
 * Return: pointer to a string with text content
 */
char *read_line(void)
{
	char *lineptr = NULL;
	size_t n = 0;

	if (getline(&lineptr, &n, stdin) == -1)
	{
		free(lineptr);
		perror("Error reading line form stream");
		exit(EXIT_FAILURE);
	}
	return (lineptr);
}
