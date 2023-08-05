#include "main.h"

/**
 * main - Entry
 * Multiplies 2 integer arguments
 * @argc: Number of arguments
 * @argv: Array storing the arguments
 *
 * Arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;

	/* Must be 3 args (1st is prog name) */
	if (argc != 3)
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
