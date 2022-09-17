#include "putchar.h"

/**
 * print_diagonal - print diagonal line
 * @n: the number of _ char
 *
 * Return: Always status.
 */

void print_diagonal(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}

	_putchar('\n');
}
