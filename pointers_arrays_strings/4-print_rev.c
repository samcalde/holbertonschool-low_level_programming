#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 *
 * Return: Void
 */
void print_rev(char *s)
{
int i;
int r = 0;
for (i = 0; s[i] != '\0'; i++)
{
r = r + 1;
}
for (i = (r - 1); i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
return;
}
