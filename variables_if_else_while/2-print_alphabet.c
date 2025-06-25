#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char letra;

	for (letra = 'a'; letra <= 'z' ; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return (0);
}
