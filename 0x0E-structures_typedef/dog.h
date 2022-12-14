#ifndef __DOG_H__
#define __DOG_H__

typedef struct dog dog_t;
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

/**
 * print_dog - print a dog
 * @d: the dog
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: his age
 * @owner: his owner
 *
 * Return: populated new dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - free a dog
 * @d: the allocated dog
 *
 * Return: Void
 */
void free_dog(dog_t *d);
#endif
