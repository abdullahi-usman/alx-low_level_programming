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
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc((max - min) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
