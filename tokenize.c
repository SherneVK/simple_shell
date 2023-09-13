#include "shell.h"

/**
 * tokenize - extract tokens from a string
 * @str: string to be extracted
 *
 * Return: pointer to a null-terminated string
 */
char **tokenize(char *str)
{
	int buff = 64;
	int i = 0;
	char **tokens = malloc(buff * sizeof(char *));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "Allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(str, DELIM);
	while (token != NULL)
	{
		if (token[0] == '#')
		{
			break;
		}
		tokens[i] = token;
		i++;
		if (i > buff)
		{
			buff += buff;
			tokens = realloc(tokens, buff * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "Reallocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, DELIM);
	}

	tokens[i] = NULL;
	return (tokens);
}
