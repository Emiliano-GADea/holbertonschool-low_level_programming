#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/*srand(time(0));
	n = rand() - RAND_MAX / 2;*/
	n = 98;
	if (n > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	} else if (n > 0 && n < 6)
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	} else
	{
		printf("Last digit of %d and is zero\n", n);
	}
	return (0);
}
