#include "putchar.h"

/**
 * print_diagonal - print diagonal line
 * @n: the number of _ char
 *
 * Return: Always status.
 */

void print_diagonal(int n)
{

	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
