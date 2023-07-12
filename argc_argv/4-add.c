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
	int l = 0;
	int r = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		l = 0;
		while (argv[i][l])
		{
			if (isdigit(argv[i][l]))
				l++;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		r = r + (atoi(argv[i]));
	}
	printf("%d\n", r);
	return (0);
}
