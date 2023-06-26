#include "main.h"
/**
 * _isdigit - Checks if char is a digit
 * @c: char to check
 *
 * Return: 1 if it is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
int i;
int r = 0;
for (i = 48; i < 58; i++)
{
if (c == i)
{
r = 1;
}
}
return (r);
}
