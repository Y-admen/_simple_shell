#include "main.h"

void interactiv(char *list_arg)
{
	char *prompt = "$ ", **arr = NULL, *buff = NULL, *lineptr = NULL, *str, *command_copy;
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
		arr = _strtock(str);
		if (check_built_in(list_arg[0], command_copy, environ, &status))
			continue;


		
	i++;	
	}
}
