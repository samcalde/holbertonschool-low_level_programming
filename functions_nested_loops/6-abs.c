#include "main.h"
#include <stdio.h>
/**
 * _abs - prints absolute value
 * @n: number to be converted
 *
 * Return: absolute value of number.
 */
int _abs(int a)
{
int r;
if (a < 0)
{
r = (-a);
}
else
{
r = a;
}
return (r);
}
