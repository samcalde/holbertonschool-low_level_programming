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
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			if (i != 0)
			{
				i--;
				for (; i >= 0; i--)
					free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
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
