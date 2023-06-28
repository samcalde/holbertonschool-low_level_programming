#include "main.h"
/**
 * puts2 - prints every other char of a str
 * @str: string
 *
 * Return: Void
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
i = i + 1;
if (str[i] == '\0')
{
_putchar('\n');
return;
}
}
_putchar('\n');
return;
}
