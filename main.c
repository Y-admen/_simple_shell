#include "main.h"

int main(__atribute__((unused)) int argc, char **argv)
{
	if (isatty(STDIN_FILENO))
		interactive(argv[0]);
	else
		non_interactive(argv[0]);
	return (0);
}
