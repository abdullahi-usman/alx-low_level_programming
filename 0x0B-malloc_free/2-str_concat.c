#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concate string
 */
char *str_concat(char *s1, char *s2)
{
	int s_len = (int)strlen(s2);
	char *buf = (char *)malloc(sizeof(char) * s_len);

	strcat(buf, s2 == NULL ? "" : s2);

	return (buf);
}
