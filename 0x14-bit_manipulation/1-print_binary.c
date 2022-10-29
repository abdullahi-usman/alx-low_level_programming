#include <stdio.h>
#include "main.h"

/**
 * divide - divide a number
 * @n: the number
 * @reminder: the reminder
 *
 * Return: the divided
 */
int divide(unsigned long int n, int *reminder)
{
	int r = n, c = 0;

	while (1)
	{
		if (r < 2)
		{
			*reminder = r;
			break;
		}
		r = r - 2;
		c++;
	}

	return (c);
}

/**
 * print_binary - print binary number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x;

	if (n > 0)
		print_binary(divide(n, &x));

	if (x == 1 || x == 0)
		_putchar((char)x);
}
