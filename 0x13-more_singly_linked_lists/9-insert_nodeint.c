#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert at index
 * @head: the head
 * @idx: the index
 * @n: the pos
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *cur_iter = *head, *temp_iter_c,
			  *node = (listint_t *)malloc(sizeof(listint_t));

	node->n = n;

	if (node == NULL || *head == NULL)
		return (NULL);

	while (1)
	{
		if (idx == (c + 1))
		{
			temp_iter_c = cur_iter->next;
			cur_iter->next = node;
			node->next = temp_iter_c;
			break;
		}

		if (cur_iter->next != NULL)
		{
			cur_iter = cur_iter->next;
			c++;
		}
		else
		{
			free(node);
			node = NULL;
			break;
		}
	}
	return (node);
}
