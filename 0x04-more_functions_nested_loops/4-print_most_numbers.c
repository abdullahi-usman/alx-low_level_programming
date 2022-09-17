#include "putchar.h"

/**
 * print_numbers - print numbers
 *
 * Return: Always status.
 */

void print_numbers(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        if (i == 50 || i == 52)
            continue;

        _putchar((char)i);
    }

    _putchar('\n');
}
