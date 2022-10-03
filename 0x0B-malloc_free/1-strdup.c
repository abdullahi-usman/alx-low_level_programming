#include <string.h>

/**
 * _strdup - return a duplicate str
 * @str: the string to duplicate
 *
 * Return: the duplicated string or null
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (str);

	return (strdup(str));
}
