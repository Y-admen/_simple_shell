#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	if (isatty(STDIN_FILENO))
		interactive();
	else
		non_interactive();
	return (0);
}
