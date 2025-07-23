#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *@s: is a pointer
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _print_rev_recursion(s - 1));
}
