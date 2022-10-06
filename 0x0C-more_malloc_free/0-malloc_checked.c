#include <stdlib.h>

/**
 * malloc_checked - malloc'ed and return address
 * @b: the malloc'ed size
 *
 * Return: the malloc'ed buffer
 */
void *malloc_checked(unsigned int b)
{
	void *buf = malloc(b);

	if (buf == NULL)
		exit(98);

	return (buf);
}
