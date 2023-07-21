#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: function to call
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
