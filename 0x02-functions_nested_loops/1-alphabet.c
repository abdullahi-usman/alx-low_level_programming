#include "putchar.h"

/**
 * print_alphabet - Prints the alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar((char)c);
	}

	_putchar('\n');
}
