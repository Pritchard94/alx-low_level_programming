#include<stdio.h>
#include<stdlib.h>
/**
 * main - tis is a program
 * fro alphabbets
 *
 * Return: succcess
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
