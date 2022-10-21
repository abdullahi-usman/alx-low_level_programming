#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free the list
 * @head: the list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_list(head->next);
	}

	free(head);
}
