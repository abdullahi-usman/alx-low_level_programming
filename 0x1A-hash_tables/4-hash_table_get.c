#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp_node;

	if (ht->size < index || ht->array[index] == NULL)
		return (NULL);
	
	if (strcmp(key, ht->array[index]->key) == 0)
		return ht->array[index]->value;
	else 
	{
		tmp_node = ht->array[index];

		while (tmp_node != NULL)
		{
			if (strcmp(key, tmp_node->key) == 0)
				return tmp_node->value;
			
			tmp_node = tmp_node->next;
		}
		
	}

	return (NULL);
}