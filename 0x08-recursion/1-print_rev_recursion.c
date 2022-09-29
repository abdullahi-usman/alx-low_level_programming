#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - print in reverse
 * @s: the string
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	int s_length = strlen(index(s, s[0]));
	char *buf = malloc(sizeof(char) * (s_length - 1));

	putchar(s[s_length - 1]);

	if (s_length <= 0)
		return;

		strncpy(buf, s, s_length - 1);
	buf[s_length - 1] = '\0';

	_print_rev_recursion(buf);
	free(buf);
}
