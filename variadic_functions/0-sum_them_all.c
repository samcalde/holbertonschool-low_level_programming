#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums
 * @n: size
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int r = 0;
	unsigned int i;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		r = r + va_arg(numbers, int);
	}
	va_end(numbers);
	return (r);
}
