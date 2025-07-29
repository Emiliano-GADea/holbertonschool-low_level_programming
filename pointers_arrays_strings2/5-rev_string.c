#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 *@s: is a pointer
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, l, o;
	char p;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i - 1;
	for (o = 0; o < i / 2; o++)
	{
		p = s[o];
		s[o] = s[l];
		s[l--] = p;
	}
}
