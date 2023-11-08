#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores a dogs data
 * @name: name of dog
 * @age: age of dog
 * @owner: the name of the dog owner
 *
 * Description: This is a data structure that hold a dogs info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
