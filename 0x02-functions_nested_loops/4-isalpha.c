#include "main.h"
/**
 * isalpha - program function
 * @c: parameter
 *
 * Return: retun 1 if lower or uppper case return 0 otherwise
 */

int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
