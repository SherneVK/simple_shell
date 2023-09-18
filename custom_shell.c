#include "shell.h"

/**
 * execute_command - Execute a command
 * @command: The command to execute
 *
 * Return: 0 on success, -1 on failure
 */
int execute_command(char *command)
{
	char *path;
	char *command_copy;
	char *token;

	path = getenv("PATH");

	if (path == NULL)
	{
		fprintf(stderr, "PATH environment variable not set\n");
		return (-1);
	}

	command_copy = strdup(command);

	if (command_copy == NULL)
	{
		perror("strdup");
		return (-1);
	}

	token = strtok(command_copy, " ");

	if (token == NULL)
	{
		fprintf(stderr, "Invalid command\n");
		free(command_copy);
		return (-1);
	}

	execvp(token, &token);

	fprintf(stderr, "Command not found: %s\n", token);

	free(command_copy);

	return (0);
}
