#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int a;
for (i = 0; i < 10; i++)
{
a = 97;
for (a = 97; a < 123; a++)
{
_putchar(a);
}
}
_putchar('\n');
return;
}
