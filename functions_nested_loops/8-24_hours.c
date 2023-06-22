#include "main.h"
/**
 * jack_bauer - Print out every minut
 *
 * Return: 0.
 */
void jack_bauer(void)
{
int hours1;
int hours2;
int minutes1;
int minutes2;
int n;
for (hours1 = 0; hours1 < 3; hours1++)
{
hours2 = 0;
for (hours2 = 0; hours2 < 10; hours2++)
{
minutes1 = 0;
for (minutes1 = 0; minutes1 < 6; minutes1++)
{
minutes2 = 0;
for (minutes2 = 0; minutes2 < 10; minutes2++)
{
n = hours1 + 48;
_putchar(n);
n = hours2 + 48;
_putchar(n);
_putchar(':');
n = minutes1 + 48;
_putchar(n);
n = minutes2 + 48;
_putchar(n);
_putchar('\n');
}
}
if (hours1 == 2 && hours2 == 4)
{
return;
}
}
}
return;
}
