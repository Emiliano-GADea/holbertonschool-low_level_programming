#include "main.h"
/**
 * puts2 - Entry point
 * @str: is a pointer
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
