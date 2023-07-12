#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a str
 * @str: string
 *
 * Return: Pointer to new str
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int l = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;
	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
