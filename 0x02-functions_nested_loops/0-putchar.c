#include"main.h"
/**
 * main - print putchar
 *
 * Return: return 0
 */
int main(void)
{
	char x = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);	

}
