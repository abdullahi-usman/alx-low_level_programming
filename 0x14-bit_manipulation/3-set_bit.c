#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow - add pow up
 * @n: the power
 * Return: the result
 */
int _pow(int n)
{
	int r = 2, i;

	for (i = 1; i < n; i++)
	{
		r *= 2;
	}

	if (n == 0)
		return (0);

	return (r);
}
/**
 * binary_to_uint - convert binary ti decimal
 * @b: the binary characters
 * Return: the result
 */

unsigned int binary_to_uint(const char *b)
{
	int r = 0, c, len = 0, _rr;

	if (b != NULL)
	{
		len = (int)strlen(b);

		for (c = 0; c < len; c++)
		{

			_rr = (int)b[c] - 48;

			if (_rr != 0 && _rr != 1)
				return (0);

			r += (_rr * _pow(len - c - 1));

			if (c == (len - 1) && _rr == 1)
				r += 1;
		}
	}

	return (r);
}

/**
 * __divide - divide a number
 * @n: the number
 * @reminder: the reminder
 *
 * Return: the divided
 */
int __divide(unsigned long int n, int *reminder)
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
 * set_bit - get the bit at index
 * @n: the number
 * @index: the possition
 * Return: the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *buf = (char *)malloc(sizeof(char) * 250);
	char *r_buf = NULL;
	int i, r_count = 0, c = *n, r = 0, c_count = 0;

	buf = memset(buf, 0, 250);
	while (1)
	{
		r = 0;
		if (c <= 0)
			break;

		c = __divide(c, &r);

		if (r == 0)
			buf[c_count] = '0';
		else if (r == 1)
			buf[c_count] = '1';

		c_count++;
	}

	r_buf = (char *)malloc(sizeof(char) * 250);
	buf[strlen(buf) - index - 1] = '1';

	for (i = c_count; i >= 0; i--)
	{
		r_buf[r_count] = buf[i];
		r_count++;
	}

	*n = binary_to_uint(r_buf);
	return (1);
}
