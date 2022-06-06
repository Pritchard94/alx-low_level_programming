#include<stdio.h>
#include<stdlib.h>
/**
 * main - this is a program
 * for alphabets
 *
 * Return: always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return(0);
}
