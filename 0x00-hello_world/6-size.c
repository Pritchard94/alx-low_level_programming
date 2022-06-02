#include<stdio.h>

/**
 * main - this is the entry point
 * good
 *
 * Return: the return value of 0 for success.
 */
int main(void)
{
int i;
float f;
char c;
long long int ll;
long int l;
/* print size of variables*/
printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(f));

return (0);

}
