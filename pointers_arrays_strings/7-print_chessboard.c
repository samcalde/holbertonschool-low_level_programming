#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - self explainatory
 * @a: str
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int l;
	int w;

	for (l = 0; l <= 8; l++)
	{
		for (w = 0; w <= 8; w++)
		{
			_putchar(a[l][w]);
		}
	}
}
