#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: Name of the person
 * @f: pointer to function
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
