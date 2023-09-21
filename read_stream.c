#include "shell.h"

/**
 * read_stream - read a line from the stream
 *
 * Return: pointer that points the read line
 */
char *read_stream(void)
{
	int buffer = 1024;
	int i = 0;
	char *lineptr = malloc(sizeof(char) * buffer);
	int character;

	if (lineptr == NULL)
	{
		fprintf(stderr, "Allocation error");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		character = getchar();
		if (character == EOF)
		{
			free(lineptr);
			exit(EXIT_SUCCESS);
		}
		else if (character == '\n')
		{
			lineptr[i] = '\0';
			return (lineptr);
		}
		else
		{
			lineptr[i] = character;
		}
		i++;
		if (i >= buffer)
		{
			buffer += buffer;
			lineptr = realloc(lineptr, buffer * sizeof(char));
			if (lineptr == NULL)
			{
				fprintf(stderr, "Reallocation error");
				exit(EXIT_FAILURE);
			}
		}
	}
}
