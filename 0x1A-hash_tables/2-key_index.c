#include "hash_tables.h"

/**
 * key_index - create a new index with the array
 * @key: the key
 * @size: suppose size of the array
 * Return: return a new index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
