#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
	int i;
	int r = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 1)
		{
			r = r + (atoi(argv[i]));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", r);
	return (0);
}
