#include "main.h"
/**
 * check_built_in - Checks if the given command matches a built-in command.
 * @args: Null terminated array of arguments.
 *
 * Return: 0 if a built-in command is matched, 1 otherwise.
 */
int check_built_in(char **args)
{
	size_t i;

	char *builtin_str[] = {"exit", "env", "setenv", "unsetenv", "cd"};

	int (*builtin_func[])(char **) = {&exit_shell, &print_env, &set_env,
					  &unset_env, &change_directory};

	for (i = 0; i < sizeof(builtin_str) / sizeof(char *); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}

	return (1);
}
