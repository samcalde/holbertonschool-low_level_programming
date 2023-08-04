#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: list
 * @n: number to add in the node
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newelement = malloc(sizeof(dlistint_t));

	if (newelement == NULL)
		return (NULL);

	newelement->n = n;
	newelement->next = *head;
	newelement->prev = NULL;
	*head = newelement;

	return (*head);
}
