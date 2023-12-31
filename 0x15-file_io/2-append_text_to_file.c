#include "main.h"
/**
 * append_text_to_file - function that creates a file.
 * @filename: A pointer to the name of the file to create
 * @text_content:  A pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		n = write(fd, text_content, strlen(text_content));
		if (n == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
