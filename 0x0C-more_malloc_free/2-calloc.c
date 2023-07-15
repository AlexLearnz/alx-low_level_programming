#include "main.h"

/**
 * _calloc - Allocates memory of an array usinc malloc
 * @nmemb: Num of elements to be allocated(num of mem bytes)
 * @size: Size of the elements
 *
 * Return: ptr to allocated memory, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (!nmemb || !size)
		return (0);

	mem = malloc (size * nmemb);

	if (!mem)
		return (0);
}
