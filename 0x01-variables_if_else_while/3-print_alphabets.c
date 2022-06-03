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
	char ch;

	for (ch = 'a' && 'A'; ch <= 'z' && 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	
	return (0);
}
