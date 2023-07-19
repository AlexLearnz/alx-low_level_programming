#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - inititializes a variable of type truct dog
 * @d: pointer to struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	/* Since d is a ptr use -> */
	d->name = name;
	d->age = age;
	d->owner = owner;
}

