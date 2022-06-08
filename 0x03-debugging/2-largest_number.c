#include "main.h"

/**
 * largest_number - prints largest number
 * @a: number 1
 * @b: number 2
 * @c: number 3
 *
 * Return: result
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
