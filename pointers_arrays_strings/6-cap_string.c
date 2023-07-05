#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes words
 * @s: string
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i = 0;
int l;

while (s[i])
{
if (s[i] == ' ' || s[i] == '.')
{
for (l = 'a'; l <= 'z'; l++)
{
if (s[i + 1] == l)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
i++;
}
return (s);
}
