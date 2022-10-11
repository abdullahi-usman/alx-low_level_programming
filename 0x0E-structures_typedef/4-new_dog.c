#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: his age
 * @owner: his owner
 *
 * Return: populated new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
