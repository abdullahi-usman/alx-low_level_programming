#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a dog
 * @d: the allocated dog
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
