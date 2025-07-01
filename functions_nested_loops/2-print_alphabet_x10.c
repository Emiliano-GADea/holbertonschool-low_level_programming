#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
	char sobamelasbuols, dou;

	for (sobamelasbuols = 1; sobamelasbuols <= 10; sobamelasbuols++)
	{
		for (dou = 'a'; dou <= 'z'; dou++)
		{
			_putchar(dou);
		}
		_putchar('\n');
	}
}
