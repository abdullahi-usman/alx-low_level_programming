#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - print all char according to format
 * @format: the format
 *
 * Return: Void
 */
void print_all(const char *const format, ...)
{
	int i = 0, j = 0, s_len = (int)strlen(format);
	char *arg;
	va_list ap;

	va_start(ap, format);
	while (i < s_len)
	{

		switch (format[i])
		{
		case 'c':
			printf("%c", (int)va_arg(ap, int));
			break;
		case 's':
			arg = va_arg(ap, char *);

			if (arg == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", arg);
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(ap, int));
			break;
		default:
			j = -1;
			break;
		}

		if (i != (s_len - 1) && j != -1)
			printf(", ");
		else
			j = 0;

		i++;
	}
	printf("\n");
}
