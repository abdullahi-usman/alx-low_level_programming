
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - put alt character
 * @str: the string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int s_length = strlen(str);
	int i;

	for (i = 0; i < s_length; i++)
	{
		if (i % 2 == 0)
			continue;

		putchar(str[i]);
	}
}
