#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print members
 * @h: the list
 * Return: the number
*/
size_t print_dlistint(const dlistint_t *h)
{
	ssize_t c = 0;
	dlistint_t *next;

	if (h != NULL)
	{
		printf("%d\n", h->n);
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
		printf("%d\n", next->n);
		next = next->next;
	}

	return (c);
}
