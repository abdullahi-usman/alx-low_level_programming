#include <stdarg.h>

/**
 * sum_them_all - sum the numbers
 * @n: the number of number
 *
 * Return: Void
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
