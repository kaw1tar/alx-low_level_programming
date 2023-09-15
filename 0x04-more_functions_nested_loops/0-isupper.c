#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: for alphabets
 *
 * Return: 1 if is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
