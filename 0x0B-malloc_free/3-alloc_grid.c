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

	int i, **array = malloc(sizeof(int[width][height]));

	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);

		memset(array[i], (char)0, sizeof(int) * width);
	}

	return array;
}
