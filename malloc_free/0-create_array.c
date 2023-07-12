#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array
 * @size: size of the array
 * @c: char to fill the array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
