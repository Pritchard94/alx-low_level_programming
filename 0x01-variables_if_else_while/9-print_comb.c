#include<stdio.h>
#include<stdlib.h>
/**
 * main - 
 * numbers
 *
 * Return: success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
	if (i < 9)
		putchar(44);
	if (i < 9)
		putchar(32);
	putchar('\n');

	return (0);
}
