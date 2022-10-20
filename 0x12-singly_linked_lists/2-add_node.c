#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a node to the current position
 * @head: the head
 * @str: the new string
 *
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *cur_pos = (list_t *)malloc(sizeof(list_t));
	list_t *swap = NULL;

	if (cur_pos != NULL)
	{
		cur_pos->str = strdup(str);
		cur_pos->len = strlen(str);
		swap = *head;
		cur_pos->next = swap;
		*head = cur_pos;
	}

	return (cur_pos);
}
