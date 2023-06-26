#include "main.h"
/**
 * print_square - prints a square
 * @n: size
 *
 * Return: Always void
 */
void print_square(int n)
{
int w;
int l;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (w = 0; w < n; w++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
return;
}
