#include "main.h"
/**
 * _strlen - Returns lenght
 * @s: string to count
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
