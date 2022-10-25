#include "lists.h"

/**
 * sum_listint - sum the list of n
 * @head: the head of the list
 * Return: sum of n's
 */
int sum_listint(listint_t *head)
{
	if (head->next == NULL)
		return (head->n);

	return (head->n + sum_listint(head->next));
}
