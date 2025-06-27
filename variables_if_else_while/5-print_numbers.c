#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description - In a scale of 1 to 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lol;

	for (lol = '0'; lol <= '9'; lol++)
	{
		putchar(lol);
	}
	putchar('\n');
	return (0);
}
