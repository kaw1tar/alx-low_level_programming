#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the input number as in intger
 * Return: 1 if the number is greater than zero, 0 if is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');

		return (-1);
	}
	_putchar('\n');
}

