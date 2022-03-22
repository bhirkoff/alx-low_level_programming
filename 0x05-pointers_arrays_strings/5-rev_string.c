#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
}
