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

	return c;
}

/**
 * print_binary - print binary number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int r = n, x;

	while (1)
	{
		if (r <= 0)
			break;

		r = divide(r, &x);
		printf("%d", x);
	}
}
