#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the number of nodes
 * @h: the linked list
 *
 * Return: the size;
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	listint_t *cur = (listint_t *)h;

	while (cur != NULL)
	{
		size++;
		printf("%d\n", cur->n);

		cur = cur->next;
	}

	return (size);
}
