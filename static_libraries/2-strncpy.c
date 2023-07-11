#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a str
 * @dest: copied str
 * @src: base str
 * @n: int
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int p;
while (src[i])
{
i++;
}
if (n > i)
{
n = i;
}
for (p = 0; p <= n; p++)
{
dest[p] = src[p];
}
return (dest);
}
