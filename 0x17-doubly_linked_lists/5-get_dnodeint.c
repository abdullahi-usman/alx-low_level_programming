#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: the head
 * @index: the index
 * Return: the node where n occurs
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *next_item = head;

	while (c != index && next_item->next != NULL)
	{
		next_item = next_item->next;
		c++;
	}

	return (next_item);
}
