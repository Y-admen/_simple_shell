#include "main.h"
/**
 * interactive - Interactive shell loop.
 *
 * Prompts for user input, handles built-in commands,
 * and executes other commands by forking child processes.
 * Runs in a loop until user exits.
 */
void interactive(void)
{
	char *prompt = "$ ", *buff = NULL, *str, *command_copy = NULL;
	size_t buf_size = 0;
	ssize_t line;

	while (1)
	{
		printf("%s", prompt);
		line = get_line(&buff, &buf_size, STDIN_FILENO);

		if (!line)
		{
			free(buff);
			exit(0);
		}
		str = remove_comment(buff);
		command_copy = _strtok(str, " ");
		execute_command(&command_copy);

		free(str);
	}
}
