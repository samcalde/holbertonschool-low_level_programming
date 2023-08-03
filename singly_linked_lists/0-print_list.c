#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
list_t *nextelement = (list_t *)h;
int nodes = 0;

 while (nextelement != NULL)
	{
		if (nextelement->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nextelement->len, nextelement->str);
		}
		nodes++;
		nextelement =  nextelement->next;
	}
	return (nodes);
}
