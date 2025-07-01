#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: 'Prints the alphabet in lowercase'
 *
 */
void print_alphabet(void)
{
	char nig;

	for (nig = 'a'; nig <= 'z'; nig++)
	{
		_putchar(nig);
	}
	_putchar('\n');
}
