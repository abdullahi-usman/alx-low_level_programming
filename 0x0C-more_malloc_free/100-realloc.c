#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate a memory
 * @ptr: old ptr
 * @old_size: old size
 * @new_size: the new size
 *
 * Return: the new ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}
	else
	{
		new_ptr = realloc(ptr, new_size);
	}

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	return (new_ptr);
}
