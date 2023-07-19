#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free() dog
 * @d: pointer to the struct dog that will be freed
 *
 * dog-t defines type struct dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
