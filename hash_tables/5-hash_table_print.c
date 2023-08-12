#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentnode;
	char first = 't';

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		currentnode = ht->array[i];
		while (currentnode != NULL)
		{
			if (currentnode->key != NULL && first == 't')
			{
				printf("'%s': '%s'", currentnode->key, currentnode->value);
				first = 'f';
			}
			else if (currentnode->key != NULL)
				printf(", '%s': '%s'", currentnode->key, currentnode->value);	
			currentnode = currentnode->next;
		}
	}
	printf("}\n");
}
