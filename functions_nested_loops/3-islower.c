#include "main.h"
/**
 * _islower - Checks if var c is lowercase character
 * @c: is the parameter to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
int r = 0;
int i;
for (i = 97; i < 123; i++)
{
if (c == i)
{
r = 1;
}
}
return (r);
}
