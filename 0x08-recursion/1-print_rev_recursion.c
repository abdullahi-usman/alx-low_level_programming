#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print in reverse
 * @s: the string
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = strlen(s) - 1; i != 0; i--)
	{
		putchar(*(s + i));
	}
}
