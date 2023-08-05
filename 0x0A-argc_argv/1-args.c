#include "main.h"

/**
 * main - Entry
 * Print number of arguments passed
 * @argc: Number of args
 * @argv: Array holding the args
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Args that come after the program name at 0 */
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
