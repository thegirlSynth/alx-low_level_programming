#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the listint_t linked list.
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *checknode;

	if (*head == NULL || (*head)->next  == NULL)
		return (*head);

	checknode = (*head)->next;
	(*head)->next = NULL;

	while (checknode->next != NULL)
	{
		temp = checknode->next;
		checknode->next = *head;
		*head = checknode;
		checknode = temp;
	}
	checknode->next = *head;
	*head = checknode;

	return (*head);
}
