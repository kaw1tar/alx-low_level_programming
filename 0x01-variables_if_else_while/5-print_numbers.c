#include <stdio.h>

/**
 * main - Entry point
 *
 * description: pints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 (Success)
 */

int main(void)
{

	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}

