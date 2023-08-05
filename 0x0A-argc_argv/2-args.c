#include "main.h"

/**
 * main - Entry
 * Printing the arguments themselves
 * @argc: Number of arguments
 * @argv: Argument string/array
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
