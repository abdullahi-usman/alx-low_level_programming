#include "lists.h"

/**
 * listint_len - return the length of the int
 * @h: the linked list
 * Return: the node
 */
size_t listint_len(const listint_t *h)
{

	ssize_t size = 0;
	listint_t *cur = (listint_t *)h;

	while (cur != NULL)
	{
		size++;

		cur = cur->next;
	}

	return (size);
}
