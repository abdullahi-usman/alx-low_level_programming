#include <string.h>
#include <stdio.h>

/**
 * print_rev - print string in reverse order
 * @s: the string
 *
 * Return: Void
 *
 */
void print_rev(char *s)
{
	int s_length = strlen(s);
	char *rev = malloc(sizeof(char) * strlen(s));
	int i, j = 0;

	for (i = s_length - 1; i >= 0; i--)
	{
		rev[j++] = s[i];
	}

	rev[s_length] = '\0';
	puts(rev);
}
