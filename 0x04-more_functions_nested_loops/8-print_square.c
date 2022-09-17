#include "putchar.h"

/**
 * print_square(int size) - print squares
 * @n: the number of # char
 *
 * Return: Always status.
 */

void print_square(int size)
{

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
