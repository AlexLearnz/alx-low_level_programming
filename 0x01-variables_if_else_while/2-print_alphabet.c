#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase_alphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(lowercase_alphabets[i]);
	}
	putchar("\n");
	return (0);
}
