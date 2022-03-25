#include "main.h"

/** _strncat - a function that concentrates two strings
 * @dest: string 1
 * @src: string 2
 * @n: amount
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	if (n != 0)
	{
		while (*dest != 0)
		{
			dest++
		}
		do
		{
			if (0 == (*dest = *src++))
			{
				break;
			}
			dest++;
		}
		while (--n != 0);
		*dest = 0;
	}
	return (dest);
}
