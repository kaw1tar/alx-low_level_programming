#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: p
 */

int *array_range(int min, int max)
{
	int *p, i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(len * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
		p[i] = min++;

	return (p);
}
