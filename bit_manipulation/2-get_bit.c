#include <stdio.h>
#include "main.h"

/**
 * get_bit - prints the binary representation of a number
 * @index: index
 * @n: number
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

    mask = 1UL << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
