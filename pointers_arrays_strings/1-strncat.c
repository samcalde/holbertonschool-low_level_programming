#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates strings
 * @dest: resulting string
 * @src: base string
 * @n: bytes
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
int p;
while (src[i])
{
i++;
}
while (dest[l])
{
l++;
}
if (n > i)
{
n = i;
}
for (p = 0; p <= n; p++)
{
dest[l] = src[p];
l++;
}
return (dest);
}
