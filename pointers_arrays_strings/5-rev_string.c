#include "main.h"
/**
 * rev_string - Self explainatory
 * @s: string
 *
 * Return: Void
 */
void rev_string(char *s)
{
int l = 0;
int i;
char c;
for (i = 0; s[i] != '\0'; i++)
{
l = l + 1;
}
l = l - 1;
for (i = 0; i == (l / 2); i++)
{
c = s[i];
s[i] = s[l - i];
s[l - i] = c;
}
return;
}
