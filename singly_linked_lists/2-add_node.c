#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement = malloc(sizeof(list_t));

	if (newelement == NULL)
		return (NULL);

	newelement->str = strdup(str);
	newelement->next = *head;
	newelement->len = strlen(newelement->str);
	*head = newelement;

	return (*head);
}
