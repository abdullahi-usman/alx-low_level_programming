#include <stdlib.h>
#include "lists.h"


/**
 * free_dlistint - free this list
 * @head: the head
*/
void free_dlistint(dlistint_t *head)
{
	if (head->next != NULL)
	{
		free_dlistint(head);
	}

	free(head->next);

	if (head->prev == NULL)
	{
		free(head);
	}
}
