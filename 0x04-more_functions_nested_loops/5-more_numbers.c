#include "putchar.h"

/**
 * more_numbers - print more numbers
 *
 * Return: Always status.
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((char)i);
		}

		_putchar('\n');
	}
}
