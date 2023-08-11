#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add to
 * @key: key. can't be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *str = NULL;
	unsigned long int index;
	hash_node_t *currentnode = NULL;
	hash_node_t *newnode = NULL;

	strcpy(str, value);
	newnode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = (char *)key;
	newnode->value = str;
	index = key_index((const unsigned char *)key, ht->size);

	currentnode = ht->array[index];

	newnode->next = currentnode;
	ht->array[index] = newnode;

	return (1);
}
