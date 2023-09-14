#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive_mode();
	}
	else
	{
		non_interactive_mode();
	}
	return (0);
}