#include "main.h"
/**
 * _strtok - Splits string by delimiters.
 * @str: The string to split.
 * @delimit: The delimiter characters.
 *
 * Return: A pointer to the first token found in string.
 */
char *_strtok(char *str, const char *delimit)
{
	static char *input;
	char *token;
	int i, j;

	if (str != NULL)
	{
		input = str;
	}

	if (input == NULL)
	{
		return (NULL);
	}

	token = input;

	for (i = 0; input[i] != '\0'; i++)
	{
		for (j = 0; delimit[j] != '\0'; j++)
		{
			if (input[i] == delimit[j])
			{
				input[i] = '\0';
				input = &input[i + 1];
				return (token);
			}
		}
	}

	input = NULL;
	return (token);
}
