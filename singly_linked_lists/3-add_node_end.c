#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: start of the list
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement = malloc(sizeof(list_t));
	list_t *nextelement = *head;

	if (newelement == NULL)
		return (NULL);

	newelement->str = strdup(str);
	if (newelement->str == NULL)
	{
		free(newelement);
		return (NULL);
	}

	newelement->next = NULL;
	newelement->len = strlen(newelement->str);

	if (*head == NULL)
		*head = newelement;
	else
	{
		while (nextelement->next != NULL)
		{
			nextelement =  nextelement->next;
		}
		nextelement->next = newelement;
	}
	return (newelement);
}
