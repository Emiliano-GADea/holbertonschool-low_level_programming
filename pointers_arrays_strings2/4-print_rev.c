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
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
