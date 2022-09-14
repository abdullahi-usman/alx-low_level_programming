#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - print_last_digit
 * @n: the number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	char buf[256];

	sprintf(buf, "%d", n);
	return buf[strlen(buf) - 1];
}
