#include "main.h"

/**
 * print_number - print the number
 * @n: the number
 */
void print_number(int n)
{
	int i;
	char buf[256];

	sprintf(buf, "%d", n);

	for (i = 0; i < (int)strlen(buf); i++)
	{
		_putchar(buf[i]);
	}
}
