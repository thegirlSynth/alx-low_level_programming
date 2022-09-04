#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: the dlistint_t list.
 * @index: the index where the new node should be added.
 * Return: 1 if it succeeded, or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *checknode = *head;
	unsigned int count = 0;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}


	while (checknode != NULL)
	{
		if (count == (index - 1))
		{
			current = checknode->next;
			checknode->next = current->next;
			if (current->next != NULL)
				current->next->prev = checknode;
			free(current);
			return (1);
		}
		checknode = checknode->next;
		count++;
	}


	return (-1);
}
