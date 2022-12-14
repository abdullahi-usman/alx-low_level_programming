#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create - create a new hash function
 * @size: the size of the hash function
 * Return: return a new hash function
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = (hash_node_t **)calloc(hash_table->size,
												sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
