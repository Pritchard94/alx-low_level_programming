#include<stdio.h>
/**
 * main -h this is the entry point.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;
/*print variable sizes*/
	printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(c));

	printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(i));

	printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(l));

	printf("Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(ll));

	printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
