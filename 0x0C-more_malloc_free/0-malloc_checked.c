#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* since return type is void */
	void *ptr;

	ptr = malloc(b);

	if (!(ptr))
		exit(98);

	return (ptr);
}
