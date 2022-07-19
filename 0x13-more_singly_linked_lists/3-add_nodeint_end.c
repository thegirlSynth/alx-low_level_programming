#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the list.
 * @n: the value of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode;
	listint_t *firstNode;

	endNode = malloc(sizeof(listint_t));
	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
		*head = endNode;

	else
	{
		firstNode = *head;

		while (firstNode->next != NULL)
			firstNode = firstNode->next;

		firstNode->next = endNode;
	}

	return (endNode);
}
