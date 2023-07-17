#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: amount of elements
 * @size: size of each
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *r = NULL;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	r = malloc(nmemb * size);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		r[i] = 0;
	}
	return (r);
}
