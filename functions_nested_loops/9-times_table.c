#include "main.h"
/**
 * times_table - Prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int n1;
int n2;
int r;
for (n1 = 0; n1 < 10; n1++)
{
_putchar(48);
for (n2 = 1; n1 < 10; n2++)
{
r = n1 * n2;
_putchar(',');
if (r < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(r + 48);
}
if (r > 10)
{
_putchar(' ');
_putchar(48 + (r / 10));
_putchar(48 + (r % 10));
}
_putchar('\n');
}
}
return;
}
