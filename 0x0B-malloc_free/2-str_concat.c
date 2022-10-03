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
	char *s1_new = s1 == NULL ? "" : s1;
	char *s2_new = s2 == NULL ? "" : s2;

	int s_len = (int)(strlen(s1_new) + strlen(s2_new)) + 1;
	char *buf = (char *)malloc(sizeof(char) * s_len);

	if (buf == NULL)
		return (buf);

	strcat(buf, s1_new);
	strcat(buf, s2_new);
	strcat(buf, "\0");

	return (buf);
}
