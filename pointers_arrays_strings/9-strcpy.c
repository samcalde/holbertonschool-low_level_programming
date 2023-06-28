#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string
 * @dest: target
 * @src: str
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; ++i)
{
dest[i] = src[i];
}
dest[i + 1] = '\0';
return (dest);
}
