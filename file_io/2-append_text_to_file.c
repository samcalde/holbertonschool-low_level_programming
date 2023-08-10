#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to open
 * @text_content: string to write
 *
 * Return: (1) on success, (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND, 0644);

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
