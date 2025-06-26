#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Se viene la papapa
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ne;
	char le = ' ';

	for (ne = 'a'; ne <= 'z'; ne++)
	{
		if (ne != 'q' && ne != 'e')
		{
			putchar(ne);
		}
	}
	putchar('\n');
	return (0);
}
