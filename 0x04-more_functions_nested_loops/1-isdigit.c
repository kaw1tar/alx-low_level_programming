#include "main.h"

/**
 * _isdigit - check for digit
 *
 * @c: is a character
 *
 * Return: 1 if c is adigit, 0 if is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
