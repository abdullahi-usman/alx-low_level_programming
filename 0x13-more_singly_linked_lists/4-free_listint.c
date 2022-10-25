#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free the listint
 * @head: the head of list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}
