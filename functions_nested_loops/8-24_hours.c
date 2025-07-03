#include "main.h"
/**
 * jack_bauer - Entry point
 * Return: void
 */
void jack_bauer(void)
{
	int sel;
	int jet;

	for (sel = 0; sel < 24; sel++)
	{
		for (jet = 0; jet < 60; jet++)
		{
			_putchar((sel / 10) + '0');
			_putchar((sel % 10) + '0');
			_putchar(':');
			_putchar((jet / 10) + '0');
			_putchar((jet % 10) + '0');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
