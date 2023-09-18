#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int l, i;
	char c;

	/*find string length without null char*/
	for (l = 0; s[1] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
}
