#include "main.h"
#include <stdio.h>
/**
 * _atoi - removes characters from a tring
 * @s: string
 *
 * Return: number
 */
int _atoi(char *s)
{
	int i = 0;
	int l;
	char n = 'f';
	char p = 'p';
	int d = 0;
	int r = 0;

	while (n == 'f')
	{
		if (s[i] == '-' && p == 'p')
			p = 'n';
		if (s[i] == '-' && p == 'n')
			p = 'p';
		for (l = 0; l < 10; l++)
		{
			if (s[i] == l)
			{
				d++;
				do {
					n = 'f';
					i++;
					for (l = 0; l < 10; l++)
						{
							if (s[i] == l)
								n = 't';
						}
				} while (n == 't');
			}
		}
		i++;
	}
	i = i - 1;

	do {
		putchar(s[i]);
		n = 'f';
		i++;
		for (l = 0; l < 10; l++)
		{
			if (s[i] == l)
				n = 't';
		}
	} while (n == 't');

	return (0);
}
