#include "main.h"

/**
 * _calloc - Allocates memory of an array
 * @nmemb: Size of memory in bytes
 * @size: size of each element in array
 *
 * Return: ptr to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
