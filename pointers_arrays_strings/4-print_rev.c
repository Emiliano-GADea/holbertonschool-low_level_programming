#include "main.h"

/**
 * print_rev - Entry point
 *@s: is a pointer
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	for (i = '\0'; s[i] >= '\0'; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
