#include"main.h"

void remove_comment(char *str)
{
	int i = 0;

	while ((str)[i] != '\0')
	{
		if ((str)[i] == '#')
		{
			if (i == 0 || (str)[i - 1] == ' ')
			{
				(str)[i] = '\0';
				break;
			}
		}
		i++;
	}
	return (str);
}
