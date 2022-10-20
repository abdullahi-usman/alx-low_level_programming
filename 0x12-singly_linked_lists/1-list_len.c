#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print the number of elements in the linked list
 * @h: the linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;

		if (h->next == NULL)
			break;

		h = h->next;
	}

	return (c);
}
