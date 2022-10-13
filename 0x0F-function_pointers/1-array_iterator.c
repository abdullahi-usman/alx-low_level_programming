#include <stdlib.h>

/**
 * array_iterator - array iterator
 * @array: the array
 * @size: the size
 * @action: the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
