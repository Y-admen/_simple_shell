#include"main.h"

void exec_command(char *command, char **command_and_argu, int *status)
{
	pid_t child_id = fork();

	switch (child_id)
	{
	case -1:
		perror("");
		break;
	case 0:
		if (execve(command, command_and_argu, environ) == -1)
		{
			*status = 2;
			perror("");
			exit(2);
		}
		break;

	default:
		if (wait(status) == -1)
		{
			perror("");
		}
		if (*status != 0)
			*status = 2;
		break;
	}
}
