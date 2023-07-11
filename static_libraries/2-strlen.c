#include "main.h"
/**
 * _strlen - Check the length of a string
 * @s: string
 *
 * Return:length of the str.
 */
int _strlen(char *s)
{
int r = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
r = r + 1;
}
return (r);
}
