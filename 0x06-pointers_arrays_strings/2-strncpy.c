#include <string.h>

/**
 * _strncpy - copy two strings
 * @dest: destination string
 * @src: source string
 * @n: the number to concat
 *
 * Return: The new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
