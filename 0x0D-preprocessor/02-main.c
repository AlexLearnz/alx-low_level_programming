#include "_putchar.c"

/**
 * main - program's entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char filename[] = __FILE__;
	int i = 0;

	for (; filename[i]; i++)
		_putchar(filename[i]);

	_putchar(10);

	return (0);
}

