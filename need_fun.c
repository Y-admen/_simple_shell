#include "main.h"


/**
 * exit_shell - Exits the shell with success return code.
 *
 * Return: 0 on success, 1 on failure.
 */
int exit_shell(void)
{
	exit(EXIT_SUCCESS);
	return (0);
}

/**
 * print_env - Prints the environment variables to stdout.
 *
 * Return: 0 on success, 1 on failure.
 */
int print_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}

	return (0);
}

/**
 * set_env - Sets an environment variable.
 * @args: Argument vector.
 *
 * Return: 0 on success, 1 on failure.
 */
int set_env(char **args)
{
	if (args[1] == NULL || args[2] == NULL)
	{
		fprintf(stderr, "Usage: setenv VARIABLE VALUE\n");
		return (1);
	}
	else
	{
		setenv(args[1], args[2], 1);
		return (0);
	}
}

/**
 * unset_env - Unsets an environment variable.
 * @args: Argument vector.
 *
 * Return: 0 on success, 1 on failure.
 */
int unset_env(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "Usage: unsetenv VARIABLE\n");
		return (1);
	}
	else
	{
		unsetenv(args[1]);
		return (0);
	}
}

/**
 * change_directory - Changes the current directory.
 * @args: Argument vector.
 *
 * Return: 0 on success, 1 on failure.
 */
int change_directory(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "Usage: cd DIRECTORY\n");
		return (1);
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("lsh");
			return (1);
		}
		return (0);
	}
}
