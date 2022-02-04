#include "lists.h"

/**
 * check_cycle - check the linked list if is a cycle or not.
 * @list: is the linked list.
 * Return: Always 0.
 */

int check_cycle(listint_t *list)
{
	listint_t *node1, *node2;

	if (!list)
		return (0);

	node1 = list;
	node2 = list->next;

	while (node1 != node2)
	{
		node1 = node1->next;
		if (!node1)
			return (0);
		
        node2 = node2->next;
		if (!node2)
			return (0);
		
        node2 = node2->next;
		if (!node2)
			return (0);
	}
	return (1);
}

