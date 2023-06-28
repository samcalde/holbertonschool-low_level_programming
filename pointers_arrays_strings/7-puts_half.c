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
for (i = 0; i < (l / 2); i++)
{
_putchar(str[(l / 2) + i]);
}
_putchar('\n');
return;
}
