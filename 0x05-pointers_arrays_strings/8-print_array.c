#include <stdio.h>

/**
 * print_array - print array
 * @a: the pointer of int
 * @n: number to print
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	putchar('\n');
}
