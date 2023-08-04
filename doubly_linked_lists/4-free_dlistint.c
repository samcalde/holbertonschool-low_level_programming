#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextelement = head;
	dlistint_t *temp = NULL;

	while (nextelement != NULL)
	{
		temp = nextelement->next;
		free(nextelement);
		nextelement = temp;
	}
}
