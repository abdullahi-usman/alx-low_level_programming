#include <string.h>

/**
 * _memcpy - copy memory
 * @dest: the destination
 * @src: the source
 * @n: the size
 *
 * Return: The return memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return ((char *)memcpy(dest, src, n));
}
