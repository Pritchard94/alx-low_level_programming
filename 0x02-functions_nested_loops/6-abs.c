#include "main.h"
/**
 * _abs - absolute vale of integer
 * @c: computed number
 *
 * Return: absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
