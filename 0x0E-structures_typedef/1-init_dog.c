#include "dog.h"
#include <string.h>
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
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
