#include "main.h"

/**
 * read_line - this function reads the input string.
 * @i_eof: int
 * Return: char input
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
