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

	int i, **array = (int **)malloc(height * sizeof(int *));

	if (width == 0 || height == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);

		memset(array[i], (char)0, width);
	}

	return (array);
}
