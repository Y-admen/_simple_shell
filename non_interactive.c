#include "main.h"

void non_interactiv(char **argv)
{
	char **arr = NULL, *buff = NULL,*command_path = NULL;
	size_t buf_size = 0;
	int  i = 1, status = 0;

	while (_get_line(&buff, &buf_size, STDIN_FILENO) != -1)
	{
		str = remove_comment(buff);
		arr = _strtock(str);
		free(buff);
		if (!check_built_in(arr, status, argv))
			{
				command_path = get_path(arr);
				if (!command_path)
				{
					show_error(argv, i, arr[0], "not found\n");
					status = 127;
				}
				else
					exec_command(command_path, arr, &status);
			

			}
			free(command_path);
	free(arr);
	free(str);
	}
	i++;	
}
