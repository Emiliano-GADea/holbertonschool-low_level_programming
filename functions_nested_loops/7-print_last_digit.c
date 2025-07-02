#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @r: is an int
 * Return: l
 */
int print_last_digit(int r)
{
	int l = r % 10;

	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
