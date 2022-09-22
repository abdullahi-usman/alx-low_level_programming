#include <stdlib.h>
/**
 * reverse_array - Reverse an array
 * @a: the array
 * @n: number of element in an array
 *
 * Return;  Void
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;
	int *arr = (int *)(malloc(sizeof(int) * n));

	for (i = n - 1; i >= 0; i--)
	{
		arr[j] = a[i];
		j++;
	}

	i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}
