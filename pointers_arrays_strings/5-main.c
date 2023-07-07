#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;
	char *m = "First, solve the problem. Then, write the code.";
	char *n = "";

    t = _strstr(s, f);
    printf("%s\n", t);

	t = _strstr(m, n);
	printf("%s\n", (t == NULL ? "nil" : t));

    return (0);
}
