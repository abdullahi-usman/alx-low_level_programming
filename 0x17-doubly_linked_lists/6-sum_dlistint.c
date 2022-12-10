#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *now_node = head;

	if (now_node != NULL)
	{
		res += now_node->n;
		now_node = head->next;
	}

	while (1)
	{
		res += now_node->n;
		if (now_node->next != NULL)
		{
			now_node = now_node->next;
		}else
		{
			break;
		}
	}
	

    return (res);
}