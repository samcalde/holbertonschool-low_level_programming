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
else
{
r = (d % 10);
}
if (r < 0)
{
r = -r;
}
c = (r + 48);
_putchar(c);
return (r);
}
