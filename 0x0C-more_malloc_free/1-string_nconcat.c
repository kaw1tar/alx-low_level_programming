#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - conctenates two strings
 * @s1: first string
 * @s2: second string
 * @n : unsigned integer
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i, j;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	p = malloc(len1 + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';

	return (p);
}
