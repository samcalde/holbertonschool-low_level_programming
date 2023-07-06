#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @b: const
 * @s: pointer
 * @n: n bytes
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
