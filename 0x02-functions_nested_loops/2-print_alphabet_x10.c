#include "putchar.h"

/**
 * print_alphabet_x10 - Prints the alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
    int s;
    for (s = 0; s < 10; s++)
    {
        int c;
        
        for (c = 97; c <= 122; c++)
        {
            _putchar((char)c);
        }
    }

	_putchar('\n');
}