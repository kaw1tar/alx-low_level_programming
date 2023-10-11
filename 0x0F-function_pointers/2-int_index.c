#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that executes a function
 * @array: a pointer of an array
 * @size: the size of the array
 * @cmp: a pointer of a function
 * Return: Always 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
