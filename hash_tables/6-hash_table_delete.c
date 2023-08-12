#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentnode, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		currentnode = ht->array[i];
		while (currentnode != NULL)
		{
			temp = currentnode;
			free(currentnode);
			currentnode = temp->next;
		}
	}
	free(ht->array);
	free(ht);
}
