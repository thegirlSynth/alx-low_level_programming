#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: the list.
 * @index: the index.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newHead = *head;
	listint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (newHead)
	{
		if (count == index - 1)
		{
			temp = newHead->next;
			newHead->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		newHead = newHead->next;
	}

	return (-1);
}
