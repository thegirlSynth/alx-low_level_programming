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

	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}


	while (checknode != NULL)
	{
		if (count == (idx - 1))
		{
			newnode->prev = checknode;
			newnode->next = checknode->next;
			checknode->next = newnode;
			newnode->next->prev = newnode;
			return (newnode);
		}
		checknode = checknode->next;
		count++;
	}



	return (NULL);
}
