#include "main.h"

/**
 * puts_half - Entry point
 * @str: is a pointer
 */
void puts_half(char *str)
{
	int l, n, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (l % 2)
	{
		for (n = (l - 1) / 2; n < l - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
