#include "main.h"

/** _strncat - a function that concentrates two strings
 * @dest: string 1
 * @src: string 2
 * @n: amount
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
