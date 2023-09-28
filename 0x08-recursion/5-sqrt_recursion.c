#include "main.h"

/**
 * _sqrt_recursion - return the netural square root of a number
 * _sqrt_recursion_helper - a helper function that performs
 * the actual recursive square root calculation
 * @n: the number
 * Return: -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
/**
 *  _sqrt_recursion_helper - a helper function that performs
 * the actual recursive square root calculation
 * @n: the number
 * @x: a number we guess
 * Return: -1 if n doesn't have a nutural square root
 */

int _sqrt_recursion_helper(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
else
return (_sqrt_recursion_helper(n, x + 1));
}
