#include<stdio.h>

/**
 * main - Entry point
 * man ascii
 * i=0-8, j=1-9
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j;

	i = 48;
	while (i <= 56)
	{
		j = 49;
		while (j <= 57)
		{
			/* To avoid same combination */
			if (j > i)
			{
				putchar(i);
				putchar(j);
				/* No comma & space in last num */
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			/* Increment j */
			j++;
		}
		/* Increment i */
		i++;
	}

	putchar('\n');

	return (0);
}
