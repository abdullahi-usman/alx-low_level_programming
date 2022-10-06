#include <stdlib.h>

/**
 * array_range - the array
 * @min: the min
 * @max: the max
 *
 * Return: the max
 */
int *array_range(int min, int max)
{
	int *arr, i, size = (max - min);

	if (size < 0)
		return (NULL);

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i < max + 1; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
