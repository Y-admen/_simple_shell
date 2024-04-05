#include "main.h"

/**
 * non_interactive - Executes commands in non-interactive mode
 *
 * This function reads lines from standard input, removes any comments,
 * tokenizes the command, and executes it using the `execute_command`
 * function. The function continues to read and execute commands until
 * an empty line is encountered, at which point it frees the buffer
 * and exits.
 */
void non_interactive(void)
{
	char *buff = NULL, *command_copy = NULL;
	size_t buf_size = 0;
	ssize_t line;

	while ((line = get_line(&buff, &buf_size, STDIN_FILENO)) != -1)
	{
		if (!line)
		{
			free(buff);
			break;
		}

		buff[strcspn(buff, "\n")] = 0;
		command_copy = _strtok(buff, " ");
		execute_command(&command_copy);

		free(buff);
		buff = NULL;
	}
}
