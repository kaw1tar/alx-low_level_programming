#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: string
 * Return: null is string null
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
		;
	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
