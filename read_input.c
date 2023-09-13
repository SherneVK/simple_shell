#include "shell.h"

/**
 * read_input - reads input from stream
 * @lineptr: store address of buu=ffer containing text
 * @n: store pointer to size of buffer
 *
 * Return: Nothing.
 */
void read_input(char **lineptr, size_t *n)
{
	if (getline(lineptr, n, stdin) == -1)
	{
		perror("Read input error");
		if (*lineptr != NULL)
		{
			free(*lineptr);
			*lineptr = NULL;
		}
	}
	else if ((*lineptr)[0] == '\n')
	{
		free(*lineptr);
		*lineptr = NULL;
	}
}
