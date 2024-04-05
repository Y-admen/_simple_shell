#include "main.h"
/**
 * get_line - Reads an entire line from a file descriptor.
 * @lineptr: The address of a pointer to a character that will be
 *           allocated to contain the line.
 * @n: The address of the size_t, bytes allocated for *lineptr.
 * @stream: The file descriptor to read from.
 *
 * Return: The number of bytes read.
 */
ssize_t get_line(char **lineptr, size_t *n, FILE *stream)
{
	return (getline(lineptr, n, stream));
}
