#include <stdio.h>

/**
 * main - Starting point of program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, last_num;

	i = 0;
	last_num = 100;
	do {
		i++;
		if (i != last_num)
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
				printf("FizzBuzz ");
			else if ((i % 5) == 0)
				printf("Buzz ");
			else if ((i % 3) == 0)
				printf("Fizz ");
			else
				printf("%d ", i);
		}
		else
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
				printf("FizzBuzz");
			else if ((i % 5) == 0)
				printf("Buzz");
			else if ((i % 3) == 0)
				printf("Fizz");
			else
				printf("%d", i);
		}
	} while (i < last_num);

	printf("\n");
	return (0);

}
