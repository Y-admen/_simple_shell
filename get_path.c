#include"main.h"
/**
 * get_cmd_path - Gets the path of a command from PATH
 * @cmd: The command name
 *
 * Return: Pointer to the command path if found, NULL if not
 */
char *get_cmd_path(char *cmd)
{
	char *path = getenv("PATH"), *cmd_path;
	char *path_copy = strdup(path);
	char *dir = strtok(path_copy, ":");

	while (dir != NULL)
	{
		cmd_path = malloc(strlen(dir) + strlen(cmd) + 2);
		strcpy(cmd_path, dir);
		strcat(cmd_path, "/");
		strcat(cmd_path, cmd);

		if (access(cmd_path, F_OK) == 0)
		{
			free(path_copy);
			return (cmd_path);
		}

		free(cmd_path);
		dir = strtok(NULL, ":");
	}
	free(path_copy);
	return (NULL);
}
