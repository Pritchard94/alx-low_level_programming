#include "main.h"
/**
 * print_alphabe_x10 - print alphabet 10x
 *
 * Return: 0
 */
void print_alphabet_10x(void)
{
	char c;
	int i;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		
		i++;
	}
}
