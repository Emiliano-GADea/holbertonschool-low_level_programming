#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * @c: is an int
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c == 'A')
	{
		return (1);
	}
	else if (c == 'a')
	{
		return (0);
	}
	putchar('\n');
	return (0);
}
