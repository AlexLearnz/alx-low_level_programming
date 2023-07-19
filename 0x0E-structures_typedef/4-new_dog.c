#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * dog_t defines the type struct dog
 * store a cp of name & owner - strcpy
 *
 * Return: NULL (Fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	int namelen, ownerlen;

	namelen = strlen(name);
	ownerlen = strlen(owner);

	the_dog = malloc(sizeof(dog_t));
	if (the_dog)
		return (0);

	the_dog->name = malloc(sizeof(char) * (namelen + 1));
	if (!the_dog->name)
	{
		free(the_dog);
		return (0);
	}

	the_dog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (!the_dog->owner)
	{
		free(the_dog);
		return (0);
	}

	strcpy(the_dog->name, name);
	strcpy(the_dog->owner, owner);
	the_dog->age = age;

	return (the_dog);
}
