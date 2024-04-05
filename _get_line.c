#include "main.h"
/**
 * get_line - Reads an entire line from a file descriptor.
 * @lineptr: The address of a pointer to a character that will be
 * allocated to contain the line.
 * @n: The address of the size_t, bytes allocated for *lineptr.
 * @stream: The file descriptor to read from.
 *
 * Return: The number of bytes read.
 */
ssize_t get_line(char **lineptr, size_t *n, FILE *stream)
{
	char *buffer;
	int ch;
	size_t i = 0;

	buffer = malloc(128);
	if (!buffer)
		return (-1);

	while ((ch = fgetc(stream)) != EOF && ch != '\n')
	{
		buffer[i++] = ch;

		if (i % 128 == 0)
		{
			buffer = realloc(buffer, i + 128);
			if (!buffer)
				return (-1);
		}
	}

	buffer[i] = '\0';

	*lineptr = buffer;
	*n = i;

	return ((ch == EOF && i == 0) ? -1 : i);
}
