#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array
 * @width: of the 2d array
 * @height: of the 2d array
 *
 * Return: Pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		h = 0;
		for (h = 0; h < width; h++)
		{
			arr[i][h] = 0;
		}
	}
	return (arr);
}
