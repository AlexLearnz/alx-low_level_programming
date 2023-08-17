#include "3-calc.h"

/**
 * main - Entry to program
 * @argc: arg counter, number of arguments
 * @argv: arg vector, array of ptrs to args
 *
 * Return: 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	sign = argv[2];
	num2 = atoi(argv[3]);

	/* Get op_function */

	return (0);
}
