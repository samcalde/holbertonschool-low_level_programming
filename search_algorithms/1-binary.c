#include "search_algos.h"

/**
 * binary_search - sorts an array of integers using Quick sort algorithm
 * @array: array of elements
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where there is a match, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int span = size - 1, min = 0, max = size - 1;
	size_t i = 0;

	if (value > array[max] || value < array[min])
		return (-1);
	while ((span / 2) >= 1)
	{
		span = max - min;
		printf("searching in array: ");
		for (i = min; i < max; i++)
		{
			if (i > min)
				printf(", ");
			printf("%d", array[i]);
		}
    	printf("\n");
		if (value == array[(span / 2) + min])
			return((span / 2) + min);
		else if (value < array[(span / 2) + min])
			max = span / 2;
		else if (value >= array[(span / 2) + min])
			min = span / 2;
	}
	return (-1);
}
