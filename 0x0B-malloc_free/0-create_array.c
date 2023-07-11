#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of char...
 * initializes it with specific char
 * @size: Size of array
 * @c: Name of array
 *
 * Return: NULL if size==0, otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
