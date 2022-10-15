#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the variadic arg strings
 * @separator: the seperator between each number
 * @n: number of argument
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%s", va_arg(ap, char *));

		if (i != (int)n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			else
			{
				printf(" ");
			}
		}
		else
		{
			printf("\n");
		}
	}
}
