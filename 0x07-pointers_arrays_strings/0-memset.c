#include <string.h>

/**
 * _memset - set the memory
 * @s: the buffer to set
 * @b: the char to set
 * @n: the size
 *
 * Return: The setted buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return ((char *)memset(s, b, n));
}
