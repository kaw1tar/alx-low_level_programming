#include "main.h"

/**
 * _pow_recursion - return the valu!e of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: -1 if y less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
