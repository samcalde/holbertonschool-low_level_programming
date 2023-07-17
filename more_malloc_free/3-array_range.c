#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *r = NULL;
	int i;

	if (min > max)
		return (NULL);
	r = malloc(sizeof(int) * (max - min));
	if (r == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		r[i] = i;
	return (r);
}
