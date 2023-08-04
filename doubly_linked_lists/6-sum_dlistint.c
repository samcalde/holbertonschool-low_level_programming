#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - retrns sum of all the data (n) of a dlistint_t linked lis
 * @head: list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nextelement = (dlistint_t *)head;
	int sum = 0;

	while (nextelement != NULL)
	{
		if (nextelement->n < 1 || nextelement->n > 0)
		{
			sum = sum + nextelement->n;
		}
		nextelement =  nextelement->next;
	}
	return (sum);
}
