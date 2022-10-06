#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: the nmemb in calloc
 * @size: the size in calloc
 *
 * Return: the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	return (calloc(nmemb, size));
}
