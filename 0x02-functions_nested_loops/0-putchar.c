#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[9] = "_putchar";
	int i = 0;

	while( i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
