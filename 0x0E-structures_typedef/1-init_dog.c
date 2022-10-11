#include "dog.h"

/**
 * init_dog - init a dog
 * @d: the dog
 * @name: his name to be
 * @age: the age
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
