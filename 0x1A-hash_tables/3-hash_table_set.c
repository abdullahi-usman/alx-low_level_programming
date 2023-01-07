#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_set - add table hash function
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 on success and -1 on error
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	long index = key_index((const unsigned char *)key, ht->size);
	char *dup_key = (char *)malloc(sizeof(key) + 1);
	char *dup_value = (char *)malloc(sizeof(value) + 1);
	hash_node_t *tmp_node, *node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (dup_key == NULL || dup_value == NULL || node == NULL)
		return (0);

	strcpy(dup_key, key);
	strcpy(dup_value, value);
	node->key = dup_key;
	node->value = dup_value;
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		tmp_node = ht->array[index];
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
		}
	}
	return (1);
}
