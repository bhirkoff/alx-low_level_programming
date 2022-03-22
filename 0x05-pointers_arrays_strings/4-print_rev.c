#include "main.h"

/**
 * print_rev - A function that prints a string in reverse,
 * followed by a new line,
 * @s: parameter string to reverse
 */

void print_rev(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i/2; j++)
	{
		temp = s[j];
		s[j] = s[i - j];
		s[i - j] = temp;
	}
}
