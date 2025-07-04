#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: is an int
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i = 0;

	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
			{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
