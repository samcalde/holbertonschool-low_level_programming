#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a char in a str
 * @s: string
 * @c: char to look for
 *
 * Return: Pointer to occurrence, or Null.
 */
char *_strchr(char *s, char c)
{
	s--;
	do {
		s++;
		if (*s == c)
			return (s);
	} while (*s != '\0');
	return (NULL);
}
