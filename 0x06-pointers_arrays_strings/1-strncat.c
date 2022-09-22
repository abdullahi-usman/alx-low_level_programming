#include <string.h>

/**
 * _strcat - concat two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: The new string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
