#include <stdio.h>

/**
 * print_to_98 - print_to_98 numbers
 * @n: number
 *
 */
void print_to_98(int n)
{
	int range_start = n;

	while (range_start != 98)
	{
		if (n > 98)
			printf("%d, ", range_start--);
		else
			printf("%d, ", range_start++);
	}

	printf("%d ", range_start);
}
