#include "3-calc.h"

/**
 * main - Entry to program...
 * Calculator program using command line
 * @argc: arg counter, number of arguments
 * @argv: arg vector, array of ptrs to
 * argument strings
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

	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' && num2 == 0) || (*sign == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(sign)(num1, num2));

	return (0);
}
