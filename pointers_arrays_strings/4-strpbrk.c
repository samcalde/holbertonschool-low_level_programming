#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for an occurrence
 * @s: string
 * @accept: accepted bytes
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int l = 0;
	int a = 0;

	while (accept[l])
		l++;
	while (*s != '\0')
	{
		for (a = 0; a < l; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
