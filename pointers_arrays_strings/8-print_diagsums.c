#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums the two diagonals of a square matrix
 * @a: matrix
 * @size: size of the matrix
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int l;
int r1 = 0;
int r2 = 0;

size--;
for (l = 0; l <= size; l++)
{
r1 = r1 + a[0 + (l * (size + 2))];
r2 = r2 + a[size + (l * size)];
}
printf("%d, %d\n", r1, r2);
}
