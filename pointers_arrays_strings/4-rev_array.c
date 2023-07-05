#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print a reverse array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int t;
n = n - 1;
for (i = 0; i <= (n / 2); i++)
{
t = a[i];
a[i] = a[n - i];
a[n - i] = t;
}
return;
}
