#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * itis_prime - check number less than n
 * @n: input integer
 * Return: 1 if is a prime number 0 otherwise
 */

int is_prime_number(int n)
{
	return (itis_prime(n, 2));
}


/**
 * itis_prime - check number less than n
 * @n: integer
 * @x: other integers
 * Return: 1 if if n is a prime number 0 otherwise
 */

int itis_prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	return (itis_prime(n, x + 1));
}
