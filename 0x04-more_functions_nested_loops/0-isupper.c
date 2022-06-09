#include "main.h"
/**
 * _isupper - cheecks for upper case
 * @x: letter to check
 *
 * Return: 1 if upper 0 if otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
