#include "lists.h"


/**
 * insert_node_beginning - adds a new node at the beginning of a
 * listint_t list
 *
 * @head: pointer to the current node (head of single linked list)
 * @number: integer to be included in new node
 * Return: listint_t* address of the new element or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *cnode, *nnode;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (0);
	nnode->n = number;

	if (*head == NULL || (*head)->n >= nnode->n)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	cnode = *head;

	while (cnode->next && cnode->next->n < nnode->n)
	{
		cnode = cnode->next;
	}

	nnode->next = cnode->next;
	cnode->next = nnode;
	return (nnode);
}