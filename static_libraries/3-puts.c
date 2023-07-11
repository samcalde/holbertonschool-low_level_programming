#include "main.h"
/**
 * _puts - Prints a string
 * @str: string
 *
 * Return: Void
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
