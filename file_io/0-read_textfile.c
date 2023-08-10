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
	char *buffer = malloc(letters);
	ssize_t readBytes;
	int fd;

	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename,  O_RDONLY);

	if (fd < 0)
		return (0);

	readBytes = read(fd, buffer, letters);

	if (readBytes < 0)
	{
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buffer, letters);
	close(fd);
	return (readBytes / sizeof(char));
}
