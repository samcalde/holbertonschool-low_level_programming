#include "main.h"
/**
 * _isupper - check if c is uppercase.
 * @c: number to be checked
 *
 * Return: 1 if it is, 0 otherwise.
 */
int _isupper(int c)
{
int r = 0;
int i;
for (i = 65; i < 91; i++)
{
if (c == i)
{
r = 1;
}
}
return (r);
}
