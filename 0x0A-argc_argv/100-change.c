#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Arg count/number of args
 * @argv: Arg vector/array of args
 *
 * Description: Prints min change in coins
 * 25, 10, 5, 2, and 1 cent
 *
 * Return: 0(Success), else 1(Error)
 */
int main(int argc, char *argv[])
{
	int input, change, i;
	int coins[] = {25, 10, 5, 2, 1};

	/* NB: The first arg is always the program name */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);
	change = 0;

	if (input < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && input >= 0;)
	{
		while (input >= coins[i])
		{
			change++;
			input = input - coins[i];
		}
		i++;
	}
	printf("%d\n", change);

	return (0);
}
