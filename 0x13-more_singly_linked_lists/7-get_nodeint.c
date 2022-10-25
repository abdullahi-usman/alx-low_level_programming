#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: the head
 * @index: the index
 *
 * Return: the return node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int c = 0;
	listint_t *cur = head;

	while (c != index)
	{
		cur = cur->next;
		c++;
	}

	return (cur);
}
