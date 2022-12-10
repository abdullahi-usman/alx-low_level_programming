#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert item at node
 * @h: the head
 * @idx: the index
 * @n: the item
 * Return: the item
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *now_node = *h;

	new_node->n = n;
	while (1)
	{
		if (c != idx)
		{
			*h = (*h)->next;
			continue;
		}

		now_node = (*h)->next;
		(*h)->next = new_node;
		new_node->next = now_node;
		now_node->prev = new_node->prev;
		new_node->prev = (*h);
		break;

	}

	return (new_node);

}
