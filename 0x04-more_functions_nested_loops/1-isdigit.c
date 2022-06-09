#include "main.h"
/**
 * _isdigit - checks for digit
 * @x: to check
 *
 * Return: return 1 if digit return 0 if otherwise
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
