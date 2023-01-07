#include <stdio.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i, printed = 0;
	hash_node_t *cur_node;
	printf("{");
	
	for (i = 0; i < ht->size; i++)
	{
		cur_node = ht->array[i];
		while (cur_node != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}
			printf("\'%s\': \'%s\'", cur_node->key, cur_node->value);
			printed++;
			cur_node = cur_node->next;
		}
		
	}
	printf("}\n");
}