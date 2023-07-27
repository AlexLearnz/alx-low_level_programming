#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Arg counter/number
 * @argv: Arg vector/array
 *
 * Decription: Multiplies 2 numbers
 *
 * Return: 0(Success), otherwise 1(Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;

	/* 3 variables only */
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}
