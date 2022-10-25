#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pop up the last item
 * @head: the linked list
 * Return: the n's data
 */

int pop_listint(listint_t **head)
{
	listint_t *cur_iter = *head;
	int n = cur_iter->n;

	*head = (*head)->next;
	free(cur_iter);

	return (n);
}
