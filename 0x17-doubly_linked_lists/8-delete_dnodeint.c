#include <stdlib.h>
#include "lists.h"


/**
 * delete_dnodeint_at_index - insert item at node
 * @head: the head
 * @index: the index
 * Return: the item
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *now_node = *head;

	while (1)
	{
		if (c != index && c < index && c > 0)
		{
			*head = (*head)->next;
			continue;
		}
		else if (c == index)
		{
			now_node = (*head);
			(*head)->prev->next = now_node->next;
			now_node->next->prev = now_node->prev->next;

			return (1);
		}

		break;

	}

	return (-1);
}
