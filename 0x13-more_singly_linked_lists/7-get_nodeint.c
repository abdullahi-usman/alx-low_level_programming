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
	unsigned int c = 0;

	while (1)
	{
		if (c == index)
			return (head);

		head = head->next;
		c++;
	}

	return (NULL);
}
