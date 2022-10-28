#include <string.h>
#include <stdio.h>

int _pow(int n)
{
	int r = 2, i;

	for (i = 1; i < n; i++)
	{
		r *= 2;
	}

	if (n == 0)
		return 0;

	return r;
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
				return 0;

			r += (_rr * _pow(len - c - 1));

			if (c == (len - 1) && _rr == 1)
				r += 1;
		}
	}

	return (r);
}
