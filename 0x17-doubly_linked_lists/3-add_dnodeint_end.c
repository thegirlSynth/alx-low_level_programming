#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the dlistint_t list.
 * @n: the number to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		return (newnode);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	newnode->prev = lastnode;
	lastnode->next = newnode;

	return (newnode);
}
