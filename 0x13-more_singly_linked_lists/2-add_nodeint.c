#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of the list
 * @head: the head
 * @n: the number
 * Return: the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		node->next = *head;
	}

	return (node);
}
