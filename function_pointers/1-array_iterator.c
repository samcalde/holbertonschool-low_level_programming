#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on an array
 * @array: pointer to array
 * @size: size of array
 * @action: function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int s = (int)size;

	if (action != NULL)
	{
		for (i = 0; i < s; i++)
			action(array[i]);
	}
}
