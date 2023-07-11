#include "main.h"
#include <stdio.h>
/**
 * funct_root - getting the root
 * @x: base
 * @t: test
 *
 * Return: -1 if there is no root
 */
int funct_root(int x, int t)
{
    if (t * t == x)
        return (t);
    if (t * t > x)
        return (-1);
    return (funct_root(x, t + 1));
}

/**
 * _sqrt_recursion - gives the square root of a number
 * @n: number
 *
 * Return: root, or -1
 */
int _sqrt_recursion(int n)
{
	int r = n;
	int a;

	a = funct_root(r, 0);
	return (a);
}
