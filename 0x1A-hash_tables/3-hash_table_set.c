#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_set - add table hash function
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * 
 * Return: 1 on success and -1 on error
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	char *dup_key = (char *)malloc(sizeof(key) + 1);
	char *dup_value = (char *)malloc(sizeof(value) + 1);
	hash_node_t *tmp_node, *node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (dup_key == NULL || dup_value == NULL || node == NULL)
		return (0);


	
	strcpy(dup_key, key);
	strcpy(dup_value, value);
	index = key_index((const unsigned char *)dup_key, ht->size);
	node->key = dup_key;
	node->value = dup_value;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	} else
	{
		tmp_node = ht->array[index];

		if (strcmp(tmp_node->key, dup_key) == 0)
		{
			tmp_node->value = value;
		} else 
		{
			while (tmp_node != NULL)
			{
				if (tmp_node->next != NULL)
				{
					tmp_node = tmp_node->next;
					continue;
				} else
				{
					tmp_node->next = node;
					break;
				}
						
				return (0);
			}
		}
	}

	return (1);
}
