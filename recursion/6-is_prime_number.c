#include "main.h"
#include <stdio.h>
/**
 * funct_prime - function to get the answer
 * @x: number
 * @y: test
 *
 * Return: 1 if it is, 0 otherwise
 */
int funct_prime(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0)
		return (0);
	return (funct_prime(x, y - 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: number
 *
 * Return: 1 if it is, 0 otherwise
 */
int is_prime_number(int n)
{
	int r;

	if (n < 2)
		return (0);
	r = funct_prime(n, n - 1);
	return (r);
}
