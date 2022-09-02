#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the doubly linked list
 * @index: the index of the node, starting from 0
 * Return: the nth node, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *checkhead = head;

	if (head == NULL)
		return (NULL);

	while (checkhead != NULL)
	{
		if (count == index)
			return (checkhead);
		checkhead = checkhead->next;
		count++;
	}

	return (NULL);
}
