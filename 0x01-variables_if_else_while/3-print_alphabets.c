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
	char ch = 'a';
	char xh = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (xh = 'A'; ch <= 'Z'; xh++)
		putchar(xh);
	putchar('\n');
	
	return (0);
}
