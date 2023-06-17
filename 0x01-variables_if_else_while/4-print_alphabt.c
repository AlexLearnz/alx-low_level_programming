#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase_alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (lowercase_alph[i] != 'e' && lowercase_alph[i] != 'q')
		{
			putchar(lowercase_alph[i]);
		}
	}
	putchar('\n');

	return (0);
}
