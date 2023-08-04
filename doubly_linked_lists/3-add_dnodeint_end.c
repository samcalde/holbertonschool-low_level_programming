#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: list
 * @n: number to add
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newelement = malloc(sizeof(dlistint_t));
	dlistint_t *nextelement = *head;

	if (newelement == NULL)
		return (NULL);

	newelement->n = n;
	newelement->next = NULL;

	if (*head == NULL)
	{
		*head = newelement;
		newelement->prev = NULL;
	}
	else
	{
		while (nextelement->next != NULL)
		{
			nextelement =  nextelement->next;
		}
		newelement->prev = nextelement;
		nextelement->next = newelement;
	}

	return (newelement);
}
