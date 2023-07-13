#include <stdio.h>

#include "main.h"

/**
 * main - Entry point of the program
 * @argc - Integer argument counter
 * @argc - Array of char ptrs
 *
 * Description: Prints the name of the program
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	/* argv[0] == *(argv + 0) == *argv */
	printf("%s\n", argv[0]);
	return (0);
}
