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

/**
 * free_listint2 - free the listint and set head to NULL
 * @head: the head of list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
