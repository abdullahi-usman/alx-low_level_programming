#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the variadic arg number
 * @separator: the seperator between each number
 * @n: number of argument
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (int)n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
}
