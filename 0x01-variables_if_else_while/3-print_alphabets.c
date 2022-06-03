#include<stdio.h>
#include<stdlib.h>
/**
 * main - print out alphabets
 * both in lower and upper case
 *
 * Return: success
 */
int main(void)
{
	char c = 'a';
	char h = 'A';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (h = 'A'; h <= 'Z'; h++)
		putchar(h);
	putchar('\n');

	return (0);
}
