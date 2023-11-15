ssize_t _get_line(char **lineptr, size_t *n, FILE *stream)
{
	return (getline(lineptr, n, stream));
}
