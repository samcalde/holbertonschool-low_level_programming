#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - copies the content of a file to another file
 * @file_from: source
 * @file_to: destination
 *
 * Return: (1) on success, error message
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int ffrom, fto;
	char *buffer = malloc(1024);
	ssize_t bytesWritten, bytesRead;

	if (argc != 3 || buffer == NULL)
		return (errors(97, file_from, buffer));

	ffrom = open(file_from, O_RDWR, 0664);
	fto = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (ffrom < 0)
		return (errors(98, file_from, buffer));
	if (fto < 0)
		return (errors(99, file_to, buffer));

	while ((bytesRead = read(ffrom, buffer, 1024)) > 0)
	{
		bytesWritten = write(fto, buffer, bytesRead);
		if (bytesWritten < 0)
			return (errors(99, file_to, buffer));
	}

	if (bytesRead < 0)
		return (errors(98, file_from, buffer));

	if (close(ffrom) != 0)
		return (errors(100, file_from, buffer));

	if (close(fto) != 0)
		return (errors(100, file_to, buffer));

	free(buffer);
	return (1);
}

/**
 * errors - checks for errors
 * @error: error code
 * @filename: name of the file related to the error
 * @buffer: allocated buffer (to be freed)
 *
 * Return: Error code
 */
int errors(int error, char *filename, char *buffer)
{
	if (error == 97)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	if (error == 98)
	{
		free(buffer);
		printf("Error: Can't read from file %s\n", filename);
		return (98);
	}
	if (error == 99)
	{
		free(buffer);
		printf("Error: Can't write to %s\n", filename);
		return (99);
	}
	if (error == 100)
	{
		free(buffer);
		printf("Error: Can't close fd %s\n", filename);
		return (100);
	}

	return (0);
}
