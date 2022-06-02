#include<stdio.h>

/**
 * main - this is the entry point
 *
 * Return: the return value of the function.
 */
int main(void)
{
	int i;
	float f;
	char c;
	long long int ll;
	long int l;

	printf("Size of char: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of int: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s) \n", (unsigned long)sizeof(l));
	printf("Size of long long int: %lu byte(s) \n", (unsigned long)sizeof(ll));
	printf("Size of float: %lu byte(s) \n", (unsigned long)sizeof(f));

	return (0);
}
