#include <stdio.h>

/**
 * _print_rev_recursion - print in reverse
 * @s: the string
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	int cur_rev = strlen(s) - 1;
	putchar(s[cur_rev]);
	s[cur_rev] = NULL;

	if (cur_rev <= 0)
		return;

	_print_rev_recursion(s);
}
