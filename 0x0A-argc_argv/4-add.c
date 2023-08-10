#include "main.h"

/**
 * main - Entry point
 * Adds positive integers only
 * @argc: Number of args
 * @argv: Array storing the arguments
 *
 * Print sum + newline
 * Assume numbers & sum are stored in int
 *
 * Return: Always 0, otherwise 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, sum;
	int i;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (1);
	}

	i = 1;
	while (i < argc)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + num;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
