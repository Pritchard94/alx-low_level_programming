#include<stdio.h>
#include<stdlib.h>
/**
 * main - print alphabets
 * alphabet game
 *
 * Return: success
 */
int main(void)
{	
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
