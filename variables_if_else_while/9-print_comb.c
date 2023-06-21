#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
if (a == 57)
{
putchar(a);
}
else
{
putchar(a);
putchar(44);
putchar(32);
}
}
return (0);
}

