#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write
 *
 * Return: (1) on success, (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	bytesWritten = write(fd, text_content, strlen(text_content));

	if (bytesWritten < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
