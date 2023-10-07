#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));

	if (p == NULL)
		return (NULL);
	else
		return (p);
}
