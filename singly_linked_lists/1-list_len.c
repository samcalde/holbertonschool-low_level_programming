#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	list_t *nextelement = (list_t *)h;
	int nodes = 0;

	while (nextelement != NULL)
	{
		nodes++;
		nextelement =  nextelement->next;
	}
	return (nodes);
}
