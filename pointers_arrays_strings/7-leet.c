#include "main.h"
#include <stdio.h>

/**
 * leet - encodes into 1337
 * @s: string to encode
 *
 * Return: str
 */
char *leet(char *s)
{
int i = 0;
int l = 0;
char arr[] = {'4', '3', '0', '7', '1'};
char lett[] = {'a', 'e', 'o', 't', 'l'};
char upp[] = {'A', 'E', 'O', 'T', 'L'};

while (s[i])
{
if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
{
l = 0;
while (l < 5)
{
if ((s[i] == lett[l]) || (s[i] == upp[l]))
{
s[i] = arr[l];
}
l++;
}
}
i++;
}
return (s);
}
