#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	{
		_putchar(s[i]);
		_putchar('\n');
	}
	while (i--)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
}


