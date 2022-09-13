#include <stdio.h>

void _putchar(char ch);
/*
 * Prints alphabets
 *
 */
extern void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar(c);
}
