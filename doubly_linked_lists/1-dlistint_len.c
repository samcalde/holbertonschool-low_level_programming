#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *nextelement = (dlistint_t *)h;
	int nodes = 0;

	while (nextelement != NULL)
	{
		nodes++;
		nextelement = nextelement->next;
	}
	return (nodes);
}
