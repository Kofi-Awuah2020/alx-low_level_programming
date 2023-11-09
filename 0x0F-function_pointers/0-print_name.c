#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: Name of the person
 * @(*f)(char *): pointer to string
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
