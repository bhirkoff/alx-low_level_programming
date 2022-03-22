#include "main.h"

/**
 * _puts - A function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: string parameter passed to be printed
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
