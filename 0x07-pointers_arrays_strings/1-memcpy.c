#include "main.h"

/**
 * _memcpy - copies memor area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > x; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
