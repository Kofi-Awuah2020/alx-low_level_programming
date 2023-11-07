#include "dog.h"
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
	 struct dog *canine = d;

	canine = malloc(sizeof(struct dog));
	if (canine == NULL)
	{
		return;
	}
	canine->name = name;
	canine->age = age;
	canine->owner;
	return;
}
