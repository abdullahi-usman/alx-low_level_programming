#include <stdio.h>

/**
 * print_diagsums - print diagsum
 * @a: the array
 * @size: the size
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int c,
		arr_size = size * size,
		i_result = 0, i_count_down = 0,
		j_result = 0, j_count_down = size - 1;

	i_result += a[0];

	for (c = 0; c < arr_size; c++)
	{
		if (i_count_down == size + 1)
		{
			i_result += a[c];
			i_count_down = 0;
		}

		if (j_count_down == 0 && c != arr_size - 1)
		{
			j_result += a[c];
			j_count_down = size - 1;
		}

		++i_count_down;
		--j_count_down;
	}

	printf("%d, %d\n", i_result, j_result);
}
