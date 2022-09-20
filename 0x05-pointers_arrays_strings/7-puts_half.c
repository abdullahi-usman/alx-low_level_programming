#include <stdio.h>
#include <string.h>

/**
 * puts_half - put half characters
 * @str: the character
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int s_length = strlen(str);
	int half_length = s_length / 2;
	int i;

	if ((s_length % 2) != 0)
		half_length = (s_length + 1) / 2;

	for (i = half_length; i < s_length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
