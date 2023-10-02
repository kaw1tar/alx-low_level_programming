#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: integer
 * @argv: the pointer
 * Return: 1 if the program does receive two arguments
 */

int main(int argc, char *argv[])
{
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
