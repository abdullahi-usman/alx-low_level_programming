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
	list_t *temp_head, *cur_head = head;

	if (head == NULL)
		return;

	while (cur_head->next != NULL)
	{
		temp_head = &(*cur_head->next);
		free(cur_head);
		cur_head = temp_head;
	}
}
