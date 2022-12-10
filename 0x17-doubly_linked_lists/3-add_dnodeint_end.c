#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add int to last item
 * @head: the list
 * @n: the item
 * Return: the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *new_head = *head;

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		while (1)
		{
			if ((*head)->next == NULL)
			{
				(*head)->next = new_node;
				new_node->prev = (*head)->prev;
				(*head) = new_head;
				break;
			}
			else
			{
				(*head) = (*head)->next;
			}
		}

	}

	return (new_node);
}
