#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * @n: bytes from 2
 *
 * Return: ponter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int fsl;
	unsigned int ssl;
	char *r;
	unsigned int i;

	if (s1 == NULL)
		fsl = 0;
	else
		fsl = strlen(s1);
	if (s2 == NULL)
		ssl = 0;
	else
		ssl = strlen(s2);
	if (n >= ssl)
		n = ssl;
	r = malloc(sizeof(int) * (fsl + n - 1));
	if (r == NULL)
		return (NULL);
	for (i = 0; i < fsl; i++)
		r[i] = s1[i];
	for (i = fsl; i < (fsl + n); i++)
		r[i] = s2[i - fsl];
	r[i] = '\0';
	return (r);
}
