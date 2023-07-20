#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: dog id
 * @name: dog name
 * @age: age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
