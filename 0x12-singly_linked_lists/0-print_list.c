#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the list of a linked list
 * @h: the linked list
 *
 * Return: the number of memebers
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h->str = "(nil)";
		}

		printf("[%d] %s", h->len, h->str);

		if (h->next == NULL)
			break;

		h = h->next;
		c++;
	}

	return (c);
}
