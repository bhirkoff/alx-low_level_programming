#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: 1 if lowercase, and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}