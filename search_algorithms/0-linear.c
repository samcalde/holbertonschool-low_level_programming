#include "search_algos.h"

/**
 * linear_search - sorts an array of integers using Quick sort algorithm
 * @array: array of elements
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where there is a match, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
