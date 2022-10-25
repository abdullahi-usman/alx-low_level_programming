#include "lists.h"

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
