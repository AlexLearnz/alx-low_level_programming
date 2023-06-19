#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success )
 */
int main(void)
{
	/**
	 * Base 16 == 0-9, a-f
	 * man ascii
	 * 0 == 48
	 * 9 == 57
	 * a == 97
	 * f == 102
	 */
	int i = 48;
	int j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (j <= 102)
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	/**
	 * Another way would have been to have i range from 48-102:
	 * i=48, while i<=102
	 * Once it passes 57, i is reassigned as 97:
	 * 48-57 printed
	 * if i>57, i=97
	 * 97-102 printed
	 * End
	 */
	return (0);
}
