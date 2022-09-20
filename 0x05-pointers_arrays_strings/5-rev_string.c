#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - return string in reverse order
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int s_length = strlen(s);
	char *rev = malloc(sizeof(char) * strlen(s));
	int i, j = 0;

	for (i = s_length - 1; i >= 0; i--)
	{
		rev[j++] = s[i];
	}

	rev[s_length] = '\0';

	for (i = 0; i < s_length; i++)
	{
		*s++ = rev[i];
	}
}
