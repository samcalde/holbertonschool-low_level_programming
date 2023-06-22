#include "main.h"
/**
 * print_alphaber_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Void
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
_putchar('\n');
}
return;
}
