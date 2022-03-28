#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a cgaracter in a string
 * @s: the string to check
 * @c: the character we are looking for
 * Return: a pointer to the first occurence of the character @c
 * in the string @s.
 * Return: return NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
		{
			return (s);
		}
		while (*s++);
	}
	return (NULL);
}
