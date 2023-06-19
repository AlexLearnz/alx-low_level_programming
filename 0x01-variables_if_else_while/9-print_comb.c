#include<stdio.h>

/**
 * main - Entry point
 *
 * Expected output: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * putchar(number)
 *
 * As long as the number is NOT 9:
 * putchar(',')
 * putchar(' ')
 *
 * Loop from 48 to 57
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
