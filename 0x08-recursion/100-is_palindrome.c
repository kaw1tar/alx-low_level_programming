#include "main.h"

/**
 * is_palindrome -  a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: a string
 * Return: 1 if it's the same of the reverse 0 if not
 */


int is_palindrome(char *s)
{
	if (*s == _print_rev_recursion(*s))
		return (1);
	else
		return (0);
}

/**
 * _print_rev_recursion - print a string
 * @s: a string!
 */

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
