#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char command[100];
	size_t len;

	if (isatty(STDIN_FILENO) == 1)
	{
		while (1)
		{
			const char *prompt = "#cisfun$ ";
			write(STDOUT_FILENO, prompt, custom_strlen(prompt));
			if (fgets(command, sizeof(command), stdin) == NULL)
			{
				break;
			}

            len = custom_strlen(command);
            if (len > 0 && command[len - 1] == '\n')
            {
                command[len - 1] = '\0';
            }

            if (custom_strcmp(command, "env") == 0)
            {
                print_environment();
            }
            else
            {
                execute_command(command);
            }
        }
    }
    else
    {
        non_interactive_mode();
    }

    return (0);
}

