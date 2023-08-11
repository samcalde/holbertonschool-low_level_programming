#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @key: key
 * @ht: hash table
 *
 * Return: value associated with the element, or NULL if key wasn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *currentnode = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	currentnode = ht->array[index];
	while (strcmp(currentnode->key, key) == 0)
	{
		if (currentnode->next == NULL)
			return (NULL);
		currentnode = currentnode->next;
	}

	value = currentnode->value;
	return (value);
}
