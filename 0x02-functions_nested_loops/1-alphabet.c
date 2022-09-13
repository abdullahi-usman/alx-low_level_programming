#include <stdio.h>
#include <putchar.h>

/*
 * Prints alphabets
 *
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar(c);
}
