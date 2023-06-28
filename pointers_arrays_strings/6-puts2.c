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
if (str[i] != '\0')
{
i = i + 1;
}
}
_putchar('\n');
return;
}
