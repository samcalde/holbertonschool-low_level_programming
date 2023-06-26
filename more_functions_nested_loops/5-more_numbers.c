#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar(49);
}
_putchar((i % 10) + 48);
}
_putchar('\n');
return;
}
