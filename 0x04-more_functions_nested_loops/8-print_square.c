#include "main.h"

/**
 * print_square - Print a square
 *
 * @size: is the size of the square
 *
 * return: Always 0 (success)
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}

