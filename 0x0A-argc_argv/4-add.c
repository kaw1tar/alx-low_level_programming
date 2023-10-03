#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: integer
 * @argv: characters
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (!isdigit(argv))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, sum;

		for (i = 1; i > argc; i++)

		sum += atoi(argv[i]);
		printf("%d\n", sum);
	}

	return (0);
}
