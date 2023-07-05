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
for (i = (n - 1); i >= 0; i--)
{
printf("%d", a[i]);
if (i != 0)
{
printf(", ");
}
else
{
return;
}
}
return;
}
