#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;
	int a = 0;

	while (s[i] != '\0')
	{
		j = i++;
	}
	j = j - 1;
	while (a < j)
	{
		temp = s[a];
		s[a] = s[j];
		s[j] = temp;

		a++;
		j--;
	}
}
