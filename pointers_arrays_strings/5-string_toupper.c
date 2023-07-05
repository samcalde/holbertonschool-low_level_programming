#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes lowercase to uppercase
 * @s: string
 *
 * Return: Str in uppercase.
 */
char *string_toupper(char *s)
{
int i = 0;
int l;
while (s[i])
{
for (l = 0; l < 26; l++)
{
if (s[i] == l + 'a')
{
s[i] = s[i] - 32;
}
}
i++;
}
return (s);
}
