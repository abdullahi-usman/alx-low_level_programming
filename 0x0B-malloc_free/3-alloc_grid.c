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

	int i, **array = (int **)malloc(width * sizeof(int *));

	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}

	return array;
}
