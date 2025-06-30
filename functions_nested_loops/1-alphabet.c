#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *
 * main - Entry point
 *
 * Description - SooS
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char nig;
	
	for(nig = 'a'; nig <= 'z'; nig++)
	{
		_putchar(nig);
	}
	_putchar('\n');
	return (0);
}
