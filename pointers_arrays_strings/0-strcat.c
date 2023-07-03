#include "main.h"
#include <stdio.h>

/**
 * char *_strcat - check the code
 * @dest: string to be attached
 * @src: base string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int l = 0;
int p;
while (src[i])
{
i++;
}
while (dest[l])
{
l++;
}
for (p = 0; p <= l; p++)
{
src[i] = dest[p];
}
return (dest);
}
