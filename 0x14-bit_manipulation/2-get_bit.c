#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index
 * @n: the num
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
