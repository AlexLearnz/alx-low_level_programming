#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struc dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("nothing");

	if (!(*d).name)
		(*d).name = "(nil)";
	if (!(*d).owner)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
