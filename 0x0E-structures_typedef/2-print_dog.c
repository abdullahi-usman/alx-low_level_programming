#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");

	if (d->age > 0)
		printf("Age: %1.6f\n", d->age);
	else
		printf("Age: (nil)");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
