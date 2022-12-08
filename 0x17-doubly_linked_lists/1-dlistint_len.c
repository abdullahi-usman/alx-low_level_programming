#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - calculate length
 * @h: the list
 * Return: the number
*/
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t c = 0;
	dlistint_t *next;

	if (h != NULL)
	{
		c++;
		next = h->next;
	}

	while (1)
	{
		if (next == NULL)
		{
			break;
		}
		c++;
		next = next->next;
	}

	return (c);
}
