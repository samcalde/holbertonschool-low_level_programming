#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: Pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *r = malloc(b);

	if (r == NULL)
		exit(98);
	return (r);
}
