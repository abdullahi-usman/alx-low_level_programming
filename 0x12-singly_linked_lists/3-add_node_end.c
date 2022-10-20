#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a node to the current position
 * @head: the head
 * @str: the new string
 *
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur_pos = NULL;

	if (*head == NULL)
	{
		*head = (list_t *)malloc(sizeof(list_t));
		cur_pos = *head;
	}
	else
	{
		cur_pos = *head;
		while (cur_pos->next != NULL)
		{
			cur_pos = cur_pos->next;
		}

		cur_pos->next = (list_t *)malloc(sizeof(list_t));
		cur_pos = cur_pos->next;
	}

	if (cur_pos != NULL)
	{
		cur_pos->str = strdup(str);
		cur_pos->len = strlen(str);
	}

	return (cur_pos);
}
