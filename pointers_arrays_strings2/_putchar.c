#include <unistd.h>

/**
 * main - Entry point
 *@c: is a char
 * Description - Anashel
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
