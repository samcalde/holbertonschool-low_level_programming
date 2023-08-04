#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: list
 * @index: nth number
 *
 * Return: nth node, or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nextelement = (dlistint_t *)head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (nextelement->next == NULL)
			return (NULL);
		nextelement =  nextelement->next;
	}
	return (nextelement);
}
