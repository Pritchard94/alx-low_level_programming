#include "main.h"
/**
 * swap_int - swaps the value of integer
 * @a: value to swap
 * @b: value to swap
 *
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
