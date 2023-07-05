#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0 if equal, neg if less, pos if greater
 */
int _strcmp(char *s1, char *s2)
{
int r = 0;
int i = 0;
do {
r = s1[i] - s2[i];
if (s1[i] == '\0' && s2[i] != '\0')
{
r = -1;
return (r);
}
if (s2[i] == '\0' && s1[i] != '\0')
{
r = 1;
return (r);
}
if (s2[i] == '\0' && s1[i] == '\0')
{
return (r);
}
} while (r == 0);
return (r);
}
