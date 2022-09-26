#include <string.h>

/**
 * _strspn - stringy span
 * @s: the string
 * @accept: the accepted
 *
 * Return: the int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
