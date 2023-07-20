#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees a dog
 * @d: dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
