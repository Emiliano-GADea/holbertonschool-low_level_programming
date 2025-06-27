#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - Anashel
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
