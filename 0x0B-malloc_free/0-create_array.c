#include <stdlib.h>
#include <string.h>

/**
 * create_array - create an array of characters
 * @size: the size of the array
 * @c: the character to fill in
 *
 * Return: the new array
 */
char *create_array(unsigned int size, char c)
{
	int n_size = sizeof(char) * size;
	char *characters = (char *)malloc(n_size);

	memset(characters, c, size);

	return (characters);
}
