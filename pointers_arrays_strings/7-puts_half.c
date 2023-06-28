#include "main.h"
/**
 * puts_half - prints second half of a str
 * @str: string
 *
 * Return: Void
 */
void puts_half(char *str)
{
int l = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
l = l + 1;
}
l = l - 1;
if (l % 2 == 1)
{
l = l - 1;
}
l = l / 2;
for (i = l; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
