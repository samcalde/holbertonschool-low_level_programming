#include "main.h"

/**
 * _print_rev_recursion - print reverse string
 * @s: string to print
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	int check = 'f';

	if (*s == '\0')
	{
		check = 't';
		return;
	}
	if (check == 't')
		_putchar(*s);
	_print_rev_recursion(s + 1);
}
