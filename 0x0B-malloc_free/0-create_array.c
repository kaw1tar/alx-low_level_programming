#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of the pointer
 * @c: character
 * Return: a pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	p = malloc(size);

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (size--)
		p[size] = c;

	return (p);
}
