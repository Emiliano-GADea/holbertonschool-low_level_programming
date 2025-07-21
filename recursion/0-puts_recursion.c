#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - printing a string function
 * @s: string passed to function
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
