#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description - Top text
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lal;

	for (lal = 'z'; lal >= 'a'; lal--)
	{
		putchar(lal);
	}
	putchar ('\n');
	return (0);
}
