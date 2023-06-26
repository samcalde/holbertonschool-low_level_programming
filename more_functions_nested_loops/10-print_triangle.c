#include "main.h"
/**
 * print_triangle - Print a triangle
 * @s: size
 *
 * Return: void.
 */
void print_triangle(int s)
{
int t;
int b;
if (s > 0)
{
for (t = 0; t < s; t++)
{
for (b = (s - (t + 1)); b > 0; b--)
{
_putchar(' ');
}
for (b = (t + 1); b > 0; b--)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
