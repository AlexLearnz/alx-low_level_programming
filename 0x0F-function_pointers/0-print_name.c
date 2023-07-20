#include "function_pointers.h"

/**
 * print_name - Prints a name using a ptr to that func
 * @name: The name string
 * @f: pointer to the function
 *
 * functions are written as func(arg/parameter)
 * for this function pointer f, its argument is a str
 * which is name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;

	f(name);
}


