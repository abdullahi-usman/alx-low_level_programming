#include <stdio.h>

void _putchar(char ch);

extern void print_alphabet(void)
{
	int c;

	for (c=97; c<=122; c++)
	{
		_putchar(c);
	}
}
