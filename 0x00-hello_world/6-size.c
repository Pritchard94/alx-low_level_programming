#include<stdio.h>
/**
 * main -h this is the entry point.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chartype;
	int inttype;
	long int longinttype;
	long long int ll;
	float floattype;
/*print variable sizes*/
	printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(chartype));
	printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(inttype));
	printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(longinttype));
	printf("Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(floattype));
	printf("\n");

	return (0);
}
