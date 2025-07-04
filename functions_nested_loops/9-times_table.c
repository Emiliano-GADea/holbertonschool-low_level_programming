#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */
void times_table(void)
{
	int sas, lel, lol;


	for (sas = 0; sas <= 9; sas++)
	{
		for (lel = 0; lel <= 9; lel++)
		{
			lol = sas * lel;
			if (lel != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (lol < 10)
				{
					_putchar(' ');
				}
			}
			if (lol >= 10)
			{
				_putchar((lol / 10) + '0');
				_putchar((lol % 10) + '0');
			}
			else
			{
				_putchar(lol + '0');
			}
		}
		_putchar('\n');
	}
}
