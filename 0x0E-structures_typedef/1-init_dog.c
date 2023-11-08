#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - function initializes a variable of type struct dog
 *
 * @d: address of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	if (d->name == NULL)
	{
		free(d->name);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
	}
}
