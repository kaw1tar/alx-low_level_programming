#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the pointer
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
