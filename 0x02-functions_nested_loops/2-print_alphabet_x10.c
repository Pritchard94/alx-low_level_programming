#include "main.h"
/**
 * main - print alphabet 10x
 *
 * Return: 0
 */
int main(void)
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
