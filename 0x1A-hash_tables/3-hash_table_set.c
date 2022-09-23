#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;


	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (ht->array[index] != NULL)
		newnode->next = ht->array[index];


	ht->array[index] = newnode;


	return (1);
}