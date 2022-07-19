#include "lists.h"


/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: the linked list.
 * Return: the head node's data or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *newNode;

	if (*head == NULL)
		return (0);

	newNode = *head;
	data = (*head)->n;
	*head =(*head)->next;
	free(newNode);
	return (data);
}
