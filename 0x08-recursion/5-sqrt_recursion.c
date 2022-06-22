#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - calc sqrt
 * @n: number
 *
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return(_sqrt(n, 1));
}
/**
 * _sqrt - calc natural square
 * @n: number to calc
 * @i: itereate number
 *
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
