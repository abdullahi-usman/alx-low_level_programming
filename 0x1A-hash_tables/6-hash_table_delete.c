#include <stdlib.h>
#include "hash_tables.h"

/**
 * delete_node - delete node recursively
 * @node: the node
*/
void delete_node(hash_node_t *node)
{
	if (node->next != NULL)
		delete_node(node->next);

	free(node);
}

/**
 * hash_table_delete - delete table
 * @ht: delete table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur_node = NULL;

	for (i = 0; i < ht->size; i++)
	{
		cur_node = ht->array[i];

		if (cur_node != NULL)
			delete_node(cur_node);
	}

	free(ht);
}
