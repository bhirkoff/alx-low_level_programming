#include <stdio.h>
#include "main.h"

/**main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	print_alphabet();

	return (0);
}
