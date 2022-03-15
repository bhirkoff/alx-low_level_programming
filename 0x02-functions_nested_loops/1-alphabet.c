#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: function to transform uppercase to lowercase 
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
