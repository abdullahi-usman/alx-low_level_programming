#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add int to last item
 * @head: the list
 * @n: the item
 * Return: the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

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
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
