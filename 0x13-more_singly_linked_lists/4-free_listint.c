#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head)
{
	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}