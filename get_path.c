#include"main.h"

char *get_location(char *command)
{
	char *path, *path_copy, *path_token, *file_path;
	int command_len, directory_len;
	struct stat buffer;

	path = _get_env("PATH");
	path_copy = _strdup(path);
	path_token = _strtok(path_copy, ":");
	command_len = _strlen(command);
	line_copy = _strdup(command);
	_strtok(line_copy, " \n");

	if ((access(line_copy, F_OK) == 0) &&
	((line_copy[0] == '/') || (line_copy[1] == '/')))
	{
		directory_len = _strlen(path_token);
		file_path = malloc(command_len + directory_len + 2);
		strcpy(file_path, path_token);
		strcat(file_path, "/");
		strcat(file_path, command);
		strcat(file_path, "\0");
