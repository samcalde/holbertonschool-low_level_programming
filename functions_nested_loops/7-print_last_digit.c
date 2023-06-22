#include "main.h"
/**
 * print_last_digit - Returns last digit of a number
 * @d: number
 *
 * Return: Last digit.
 */
int print_last_digit(int d)
{
int r;
int c;
if (d == 0)
{
r = 0;
}
else if (d < 0)
{
r = ((-d) % 10);
}
else
{
r = (d % 10);
}
c = (r + 48);
_putchar(c);
return (r);
}
