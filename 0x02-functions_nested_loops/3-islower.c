#include "main.h"
/**
 * _islower - lower
 * c referes to an integer
 * Return: 1 for lowercase character 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
