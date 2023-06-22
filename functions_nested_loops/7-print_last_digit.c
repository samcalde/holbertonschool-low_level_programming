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
if (d == 0)
{
r = 0;
}
else
{
r = (d % 10);
}
return (r);
}
