#include <stdio.h>
#include "main.h"

/**main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++);
	{
		_putchar(c + i);
	}
	_putchar(10);

	return (0);
}
