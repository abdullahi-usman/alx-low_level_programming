#include <stdio.h>
#include <stdlib.h>
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
	char *str;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			str = "(nil)";
		}
		else
		{
			str = h->str;
		}

		printf("[%d] %s\n", h->len, str);
		c++;

		if (h->next == NULL)
			break;

		h = h->next;
		}

	return (c);
}
