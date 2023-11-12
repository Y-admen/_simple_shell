#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: char parameter
 * Return: value of coun
*/

int _strlen(char *s)
{
	int coun;

	for (coun = 0; *s != '\0'; s++)
		coun++;
	return (coun);
}


/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: parameter
 * @src: pameter
 * Return:  the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

/**
 * _strcat -  function that concatenates two strings.
 * @dest: char parameter
 * @src: char parameter
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c] != '\0')
		c++;
	for (c1 = 0; src[c1] != '\0'; c1++)
		dest[c++] = src[c1];
	dest[c] = '\0';
	return (dest);
}

/**
 * _strcmp -  function that compares two strings.
 *
 * @s1: char parameter
 * @s2: char parameter
 *
 * Return:int 0,-,+
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);

}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
