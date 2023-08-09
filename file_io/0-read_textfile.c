#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: path to the file
 * @letters: letters to print
 *
 * Return: 0 if error / number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t readBytes;
	ssize_t bytesWritten;
	int fd;

	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd < 0)
		return (0);

	readBytes = read(fd, buffer, sizeof(buffer));

	if (readBytes < 0)
	{
		close(fd);
		return (0);
	}

	bytesWritten = write(fd, buffer, sizeof(buffer));

	if (bytesWritten < 0)
	{
		close(fd);
		return (0);
	}

	if (readBytes == bytesWritten)
	{
		return (bytesWritten / sizeof(char));
	}
	return (0);
}
