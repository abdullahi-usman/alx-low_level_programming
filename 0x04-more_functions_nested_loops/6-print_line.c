#include "putchar.h"

/**
 * print_line - print line
 * @n: the number of _ char
 *
 * Return: Always status.
 */

void print_line(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
