#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = (dog_t *)malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	doggy->name = (char *)malloc(sizeof(name));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = (char *)malloc(sizeof(owner));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->name = strdup(name);
	doggy->owner = strdup(owner);
	doggy->age = age;
	return (doggy);
}
