#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: sosurce
 * @c: bytes from memory area to copy
 *
 * Return: memory replaced
 */
char *_memcpy(char *dest, char *src, unsigned int c)
{
	unsigned int a;

	for (a = 0; a < c; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
