#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the list.
 * @idx: idx is the index of the list where the new node should be added.
 * @n: the value of n.
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prevNode;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || *head == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	prevNode = *head;
	while (prevNode && i < idx)
	{
		if (i == (idx - 1))
		{
			newNode->next = prevNode->next;
			prevNode->next = newNode;
			return (newNode);
		}
		else
			prevNode = prevNode->next;
		i++;
	}
	return (NULL);
}
