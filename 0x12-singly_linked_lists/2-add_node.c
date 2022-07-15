#include "lists.h"


/**
 * add_node - adds a new node at at the beginning of a list_t list.
 * @head: the head node.
 * @str: the string to be duplicated
 * Return: the address of the new node or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *stringdup;
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	stringdup = strdup(str);
	if (stringdup == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newnode->str = stringdup;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;


	return (newnode);
}
