#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: Pointer to structure
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		puts("");
	}
	(d->name != NULL ? printf("Name: %s\n", d->name) : puts("Name: (nil)"));
	(d->age != 0 ? printf("Age: %f\n", d->age) : puts("Age: (nil)"));
	(d->owner != NULL ? printf("Owner: %s\n", d->owner) : puts("Owner: (nil)"));
}
