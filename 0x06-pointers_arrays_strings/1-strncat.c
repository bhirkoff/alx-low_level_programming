#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of elemennts to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
