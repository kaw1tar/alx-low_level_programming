#include "main.h"
/**
 * _memset - fils memory with a constant byte
 * @n: number of bytes
 * @s: pointer
 * @b: the constant byte
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}
