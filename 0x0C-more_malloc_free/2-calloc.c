#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill a block of memory with a specified value
 * @s: pointer
 * @i: constant value
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char i, unsigned int n)
{
	char *pt = s;

	while (n--)
		*s++ = i;
	return (pt);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size in bytes!
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
if (p == 0)
{
return (NULL);
}
_memset(p, 0, nmemb * size);

return (p);
}
