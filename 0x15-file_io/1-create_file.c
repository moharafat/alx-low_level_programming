#include "main.h"
#include <unistd.h>

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

	fd = open(filename, O_WRONLY O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (fielname == NULL)
	{
		return (-1);
	}
	while (len != NULL)
	{
	write(1, text_content, len);
	}
	close(fd);
	return (1);
}
