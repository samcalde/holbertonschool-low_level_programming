#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: n number
 *
 * Return: Void
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
}
}
if (n > 98)
{
for (n = n; n > 98; n--)
{
printf("%d ", n);
}
}
printf("98");
_putchar('\n');
return;
}
