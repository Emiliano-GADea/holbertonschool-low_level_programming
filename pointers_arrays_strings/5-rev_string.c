#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 *@s: is a pointer
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
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
