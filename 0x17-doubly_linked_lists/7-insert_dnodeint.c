#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at a given position.
 * @h: the dlistint_t list.
 * @idx: the index where the new node should be added.
 * @n: the number to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *checknode = *h;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	while (checknode != NULL)
	{
		if (count == idx)
			break;
		checknode = checknode->next;
		count++;
	}

	if (idx >= count && checknode == NULL && *h != NULL)
		return (NULL);

	if (checknode != NULL)
	{
		newnode->prev = checknode->prev;
		checknode->prev = newnode;
		newnode->next = checknode;
		if (count > 0)
			newnode->prev->next = newnode;
	}

	if (count == 0)
		*h = newnode;

	return (newnode);
}
