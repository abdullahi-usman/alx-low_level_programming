#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of the list
 * @head: the head
 * @n: the number
 * Return: the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cur_iter, *node = (listint_t *)malloc(sizeof(listint_t));

	node->n = n;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		cur_iter = *head;
		while (cur_iter->next != NULL)
		{
			cur_iter = cur_iter->next;
		}
		cur_iter->next = node;
	}

	return (*head);
}
