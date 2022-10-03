#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - alloc a two dimesion array
 * @width: the width
 * @height: the height
 *
 * Return: return a new array
 */
int **alloc_grid(int width, int height)
{

	int *array;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int *)malloc((width * height) * sizeof(int));

	if (array == NULL)
		return (array);

	memset(array, (char)0, sizeof(width * height) * sizeof(int));

	return (array);
}
