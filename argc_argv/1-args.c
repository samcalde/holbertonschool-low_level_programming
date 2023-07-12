#include <stdio.h>

/**
 * main - prints name of the program
 * @argv: arguments
 * @argc: argument count
 *
 * Return: void
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
