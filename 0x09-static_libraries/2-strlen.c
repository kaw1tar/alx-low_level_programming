#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: a string parameter
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
