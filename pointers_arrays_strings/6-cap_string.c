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

if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
while (s[i])
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == ',' || s[i] == '.')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
else if (s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
else if (s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
i++;
}
return (s);
}
