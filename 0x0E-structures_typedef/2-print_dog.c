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
	(d->name == NULL ? puts("Name: (nil)") : printf("Name: %s\n", d->name));
	(d->age == 0 ? puts("Age: (nil)") : printf("Age: %f\n", d->age));
	(d->owner == NULL ? puts("Owner: (nil)") : printf("Owner: %s\n", d->owner));
}
