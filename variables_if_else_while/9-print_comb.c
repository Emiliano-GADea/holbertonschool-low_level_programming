#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description - Robotic Sex, Grommit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ni;

	for (ni = '0'; ni <= '9'; ni++)
	{
		putchar(ni);
		if (ni != 9 + '0')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
