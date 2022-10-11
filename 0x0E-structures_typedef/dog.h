#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - a struct od a dog
 * @name: the dog's name
 * @age: his age
 * @owner: his owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - init a dog
 * @d: the dog
 * @name: his name to be
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
