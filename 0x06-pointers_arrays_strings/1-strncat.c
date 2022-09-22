#include <string.h>

/**
 * _strncat - concat two strings
 * @dest: destination string
 * @src: source string
 * @n: the number to concat
 *
 * Return: The new string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
