#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n :  given number
 * Return: factorialof agiven number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
