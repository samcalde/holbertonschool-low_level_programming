#include "main.h"
/**
 * print_sign - check the code.
 * @n: variable to be checked
 *
 * Return: 1 if pos, -1 if neg, 0 if 0
 */
int print_sign(int n)
{
int r;
char s;
if (n > 0)
{
s = '+';
r = 1;
}
else if (n < 0)
{
s = '-';
r = -1;
}
else
{
s = '0';
r = 0;
}
_putchar(s);
return (r);
}
