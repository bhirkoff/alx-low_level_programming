#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = "putchar";
	int i = 0;
	int s = sizeof(a) / sizeof(char);
	putchar('_');

	while ( a[i] < s)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
}
