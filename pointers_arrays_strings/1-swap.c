#include "main.h"
/**
 * swap_int - Swaps the value of 2 var
 * @a: Var a
 * @b: Var b
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
return;
}
