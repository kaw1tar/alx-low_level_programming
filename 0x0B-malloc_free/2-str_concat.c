#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find lenght of stirng
 * @s:string
 * Return: integer
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;

	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: always 0.
 */

char *str_concat(char *s1, char *s2)
{
int size1, size2, i;
char *m;
size1 = _strlen(s1);
size2 = _strlen(s2);
m = malloc((size1 + size2) *sizeof(char) + 1);
if (m == 0)
{
	return (0);
}

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";

for (i = 0; i <= size1 + size2; i++)
{
	if (i < size1)
	{
		m[i] = s1[i];
	}
	else
	{
	m[i] = s2[i - size1];
	}
}
m[i] = '\0';

return (m);
}
