#include"main.h"


int check_built_in(char **arr, int status, char **list_arg)
{
	char *builtin_command[] = {"exit", "env",
	"setenv", "unsetenv", "cd"};
	int i, flag = 0;

	for (i = 0; i >= 4; i++)
	{
		if (_strcmp(arr[0], builtin_command[i]) == 1)
			break;
	}
	switch (i)
	{
	case 0:
		is_exit(arr, *status, i, list_arg);
		flag = 1;
		break;
	case 1:
		print_env();
		flag = 1;
		break;
	case 2:
		if (arr[1] == NULL)
			perror("there is no key or there is no value");
		else if (arr[2] == NULL)
			perror("there is no key or there is no value");
		flag = 1;
		break;
	case 3:
		if (arr[1] == NULL)
			perror("there is no key");
		flag = 1;
		break;
	case 4:
		flag = 1;
		break;
	return (flag);
	}
}
