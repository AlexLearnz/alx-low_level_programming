#include <stdlib.h>
#include "main.h"

/**
 * main - Entry
 * @argc: Arg counter/number or args
 * @argv: Arg vector/array
 *
 * Description: Adds nums greater than 0
 *
 * Return: 0(Success), otherwise 1(Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int num;

	if (argc <= 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", sum);

	return (0);
}



