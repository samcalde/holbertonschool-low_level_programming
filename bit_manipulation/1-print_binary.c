#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int ceroi = 1;
	int i;

	for (i = bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0)
		{
			_putchar('1');
			ceroi = 0;
		}
		else if (!ceroi)
		{
			_putchar('0');
		}
	}
	if (ceroi)
	{
		_putchar('0');
	}
}
