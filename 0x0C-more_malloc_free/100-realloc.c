#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * use malloc && free
 * @ptr: ptr to mem prev allocated
 * @old_size: previoulsy allocated mem size
 * @new_size: newly allocated mem size
 *
 * Return: ptr to newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		if (new_size > old_size)
			copy_size = old_size;
		else
			copy_size = new_size;

		memcpy(new_ptr, ptr, copy_size);
		free(ptr);
	}

	return (new_ptr);
}
