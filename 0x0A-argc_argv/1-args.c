#include "main.h"

/**
 * main - Entry point of the program
 * @argc: intger number of arguments
 * @argv: array of char pointers (strings / arguments)
 *
 * Description: Prints number of arguments (argc)
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	/**
	 * argc also counts the prog name
	 * argc - 1 removes prog name
	 * we now get the count of additonal args passed
	 */
	return (0);
}
