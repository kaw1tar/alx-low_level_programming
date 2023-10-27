#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: num of bits
 * @m: num
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xo = n ^ m;
	unsigned int count = 0;

	while (xo)
	{
		if (xo & 1ul)
			count++;
		xo = xo >> 1;
	}
	return (count);
}
