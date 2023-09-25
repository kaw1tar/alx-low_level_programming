#include "main.h"

/**
 * _strspn - getsthe length of a prefix substring
 * @s: string
 * @accept: number of bytes
 * Return: n bytes int the initialsegmentof s consist bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
