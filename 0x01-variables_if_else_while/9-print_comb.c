#include<stdio.h>
#include<stdlib.h>
/**
 * main - 
 *
 * Return: success
 */
int main(void)
{
	int i;
	const char *sep = "";

	for (i = 0; i <= 9; i++)
		fputs(sep, stdout);
	sep = ", ";
		putchar(i);
	putchar('\n');

	return (0);
}
