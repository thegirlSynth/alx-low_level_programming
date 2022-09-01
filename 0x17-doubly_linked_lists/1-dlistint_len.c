#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the doubly linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
