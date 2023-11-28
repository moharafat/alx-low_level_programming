#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
/**
 * create_file - function that creates a file.
 * @filename: A pointer to the name of the file to create
 * @text_content:  A pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = _strlen(text_content);
	int n = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	while (len)
	{
		n = write(fd, text_content, len);
	}
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
