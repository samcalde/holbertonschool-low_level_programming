#include "main.h"
#include <stdio.h>

/**
 * _strspn - strspn function
 * @s: string
 * @accept: characters to be matched up against
 *
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int i = 0;
	int l = 0;
	int f;
	int t;

	while (accept[i])
	{
		i++;
	}
	while (s[l])
	{
		t = 'f';
		for (f = 0; f < i; f++)
		{
			if (s[l] == accept[f])
			{
				r++;
				t = 't';
			}
		}
		l++;
		if (t == 'f')
			return (r);
	}
	return (r);
}
