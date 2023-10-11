#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition
 * @a: integer 1
 * @b: integer 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a +b);
}

/**
 * op_sub - subtraction
 * @a: integer 1
 * @b: integer 2
 * Return: 1 - 2
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: integer 1
 * @b: integer 2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: integer 1
 * @b: integer 2
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division
 * @a: integer 1
 * @b: integer 2
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return ( a % b);
}
