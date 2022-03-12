#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		int j = '0';

		while (j <= '9')
		{
			if (i  < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
