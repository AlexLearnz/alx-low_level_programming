#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/**
	 * man ascii
	 * Ascii decimal values:
	 * a = 97
	 * z = 122
	 */
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		--i;
	}
	putchar('\n');
	return (0);
}

