#include "shell.h"

/**
 * builtins_list - number of builtins functions
 *
 * Return: number of builtin functions
 */
int builtins_list(void)
{
	char *builtin_func_list[] = {
	    "cd",
	    "env",
	    "exit"
	};

	return (sizeof(builtin_func_list) / (sizeof(char *)));
}

/**
 * exec - map if command is a builtin or a process
 * @args: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int exec(char **args)
{
	char *builtin_func_list[] = {
	    "cd",
	    "env",
	    "exit"
	};
	int (*builtin_func[])(char **) = {
	    &custom_cd,
	    &custom_env,
	    &custom_exit
	};
	int i = 0;

	if (args[0] == NULL)
	{
		return (-1);
	}

	for (; i < builtins_list(); i++)
	{
		if (strcmp(args[0], builtin_func_list[i]) == 0)
			return ((*builtin_func[i])(args));
	}

	return (process(args));
}
