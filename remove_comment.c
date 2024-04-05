#include"main.h"



/**
 * remove_comment - Removes comments from a string
 * @str: The string to remove comments from
 *
 * Return: The string with comments removed
 */
char *remove_comment(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (i == 0 || str[i - 1] == ' ')
			{
				str[i] = '\0';
				break;
			}
		}
		i++;
	}
	return (str);
}

/**
 * execute_command - Executes a command
 * @args: The command and arguments to execute
 *
 * Return: 1 on success, 0 on failure
 */
int execute_command(char **args)
{
	pid_t pid;
	int status;
	char *cmd_path;

	if (check_built_in(args) == 0)
		return (1);

	if (args[0][0] == '/')
	{
		cmd_path = strdup(args[0]);
	}
	else
	{
		cmd_path = get_cmd_path(args[0]);
	}
	if (cmd_path != NULL)
	{
		pid = fork();
		if (pid == 0)
		{
			if (execv(cmd_path, args) == -1)
			{
				perror("lsh");
			}
			exit(EXIT_FAILURE);
		}
		else if (pid < 0)
		{
			perror("lsh");
		}
		else
		{
			do
			{
				waitpid(pid, &status, WUNTRACED);
			} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		}
		free(cmd_path);
	}
	else
	{
		fprintf(stderr, "%s: command not found\n", args[0]);
	}

	return (1);
}
