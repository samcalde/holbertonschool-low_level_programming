#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int l;
	int check = 0;

	while (needle[i])
		i++;
	i--;
	while (*haystack != '\0')
	{
		check = 0;
		if (*haystack == needle[0])
		{
			for (l = 0; l <= i; l++)
			{
				if (*(haystack + l) == needle[l])
					check++;
				if (check == i)
					return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
