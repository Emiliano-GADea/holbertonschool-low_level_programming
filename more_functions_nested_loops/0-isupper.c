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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
