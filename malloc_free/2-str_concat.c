#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int l = 0;
	int l2 = 0;
	int i;

	while (s1[l])
		l++;
	while (s2[l2])
		l2++;
	p = malloc(sizeof(char) * (l + l2) + 1);
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < l; i++)
		{
			p[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = l; i <= (l + l2); i++)
		{
			p[i] = s2[i - l];
		}
	}
	return (p);
}
