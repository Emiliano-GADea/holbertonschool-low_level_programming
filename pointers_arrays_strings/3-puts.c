#include "main.h"
#include <stdio.h>
/**
 * _puts - Entry point
 *@str: is a pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
