#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "putchar.h"
/**
 * print_last_digit - print_last_digit
 * @n: the number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	char buf[256];
	char last_digit;

	sprintf(buf, "%d", n);
	last_digit = buf[strlen(buf) - 1];

	_putchar((int)last_digit);
	return (last_digit - 48);
}
