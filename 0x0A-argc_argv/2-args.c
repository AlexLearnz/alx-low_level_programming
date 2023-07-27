#include "main.h"

/**
 * main - prints all args it receives
 * @argc: Argument counter/number
 * @argv: Argument vector/array
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc;)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
