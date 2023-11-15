#include "main.h"

void interactiv(char **argv)
{
	char prompt = "$ ", **arr = NULL, *buff = NULL, *str = NULL,
	*command_path = NULL;
	size_t buf_size = 0;
	int  i = 1, status = 0;

	while(1)
	{
		_putchar(prompt);
		if(_get_line(&buff, &buf_size, STDIN_FILENO) == -1)
		{
			free(buff);
			exit(0);
		}
		str = remove_comment(buff);
		arr = _strtock(str, " \n\t");
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
	
	i++;	
	}
}
