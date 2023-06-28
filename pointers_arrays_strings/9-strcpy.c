#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string
 * @dest: target
 * @src: str
 *
 * Return: Always 0.
 */
char* _strcpy(char *dest, char *src)
{
int i;
int l;
for (i = 0; src[i] != '\0'; i++)
{
l = l + 1;
}
for (i = 0; i <= l; i++)
{
dest[i] = src[i];
}
return (dest);
}
