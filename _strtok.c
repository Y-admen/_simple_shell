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
	return (strtok(str, delimit));
}
