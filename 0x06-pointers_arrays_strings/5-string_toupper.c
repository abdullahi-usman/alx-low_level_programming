#include <ctype.h>
#include <string.h>

/**
 * string_toupper - convert string to upper case
 * @str: the string
 *
 * Return: the string in upper case
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}

	return (str);
}
