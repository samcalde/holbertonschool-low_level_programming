#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: index to insert the node
 * @n: number to add to the node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newelement = malloc(sizeof(dlistint_t));
	dlistint_t *nextelement = *h;
	unsigned int i;

	if (newelement == NULL)
		return (NULL);

	newelement->n = n;

	for (i = 0; i <= idx; i++)
	{
		if (nextelement->next == NULL)
			return (NULL);
		nextelement = nextelement->next;
	}
	newelement->prev = nextelement->prev;
	newelement->next = nextelement;
	nextelement->prev->next = newelement;
	nextelement->prev = newelement;

	return (newelement);
}
