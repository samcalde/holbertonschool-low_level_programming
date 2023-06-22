#include "main.h"
/**
 * _isalpha - check if c is a letter
 * @c: var to be checked
 *
 * Return: 1 is positive, 0 otherwise.
 */
int _isalpha(int c)
{
int a;
int r = 0;
for (a = 97; a < 123; a++)
{
if (c == a)
{
r = 1;
}
}
for (a = 65; a < 91; a++)
{
if (c == a)
{
r = 1;
}
}
return (r);
}
