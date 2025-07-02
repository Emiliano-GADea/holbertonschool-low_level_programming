#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - Entry point
 * @r: is an int
 *
 * Return: r
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
	_putchar('\n');
	return (0);
}
