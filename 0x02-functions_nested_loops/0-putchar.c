#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;
	int length = sizeof(a) / sizeof(char);

	while ( a[i] < length)
	{
		putchar(a[i]);
		i++;
	}
}
