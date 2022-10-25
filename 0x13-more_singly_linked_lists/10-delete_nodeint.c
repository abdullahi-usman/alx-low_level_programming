
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - insert at index
 * @head: the head
 * @index: the index
 * Return: the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = -1;
	listint_t *cur_iter = *head, *temp_iter_c;

	if (*head == NULL)
		return (-1);

	while (1)
	{
		if (cur_iter->next != NULL)
		{
			cur_iter = cur_iter->next;
			c++;
		}
		else
		{
			break;
		}

		if (index == c)
		{
			temp_iter_c = cur_iter->next;
			cur_iter->next = temp_iter_c->next;

			free(temp_iter_c);
			break;
		}
	}
	return (-1);
}
