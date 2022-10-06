#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concate two string
 * @s1: the string
 * @s2: the other string
 * @n: the length of s2 to concate
 *
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int malloced_n;
	char *buf;

	malloced_n = s1 != NULL ? strlen(s1) : 1;

	if (s2 == NULL)
		malloced_n += 1;
	else if (n >= strlen(s2))
		malloced_n += strlen(s2);
	else
		malloced_n += n;

	buf = (char *)malloc(malloced_n * sizeof(char));

	if (s1 != NULL)
		strcat(buf, s1);

	if (s2 != NULL)
		strncat(buf, s2, malloced_n - strlen(s1));

	return (buf);
}
