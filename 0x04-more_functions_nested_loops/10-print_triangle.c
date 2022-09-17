#include "putchar.h"

/**
 * print_triangle - print triangle size
 * @size: the number of # char
 *
 * Return: Always status.
 */

void print_triangle(int size)
{

	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j != 0; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
