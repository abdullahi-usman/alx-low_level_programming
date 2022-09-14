#include <stdio.h>
#include <string.h>
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

	sprintf(buf, "%c", n);
	last_digit = buf[strlen(buf) - 1];

	_putchar(last_digit);
	return (last_digit);
}
