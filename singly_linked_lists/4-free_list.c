#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: start of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nextelement = head;
	list_t *temp = NULL;

	while (nextelement != NULL)
	{
		temp = nextelement->next;
		free(nextelement);
		nextelement =  temp;
	}
	free(nextelement);
}
