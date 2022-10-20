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

	while (cur_head != NULL)
	{
		temp_head = cur_head->next;
		if (cur_head->str != NULL)
			free(cur_head->str);

		cur_head->next = NULL;
		free(cur_head);

		cur_head = temp_head;
	}

	free(head);
}
