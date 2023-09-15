#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"

/**
 * custom_strlen - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
size_t custom_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * custom_strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if the strings are equal, a positive value if s1 > s2,
 * and a negative value if s1 < s2.
 */
int custom_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * print_environment - Print the current environment variables.
 */
void print_environment(void)
{
	char **env = environ;
	const char *env_str;
	size_t len;

	while (*env != NULL)
	{
		env_str = *env;
		len = custom_strlen(env_str);
		write(STDOUT_FILENO, env_str, len);
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
