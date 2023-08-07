#include "main.h"

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: The specific char
 *
 * An array of chars is called a string
 *
 * Return: ptr to array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	/* Input size is 0. 0*sizeof = 0 */
	if (size == 0)
	{
		return ('\0');
	}

	/* memory address size of 1byte * size */
	ptr = malloc(sizeof(char) * size);

	/* memory address size == 0bytes */
	if (ptr == 0)
	{
		return ('\0');
	}

	/* ptr points to first element in block */
	for (i = 0; i < size; i++)
	{
		/* ptr[i] = specific char */
		*(ptr + i) = c;
	}

	return (ptr);
}
