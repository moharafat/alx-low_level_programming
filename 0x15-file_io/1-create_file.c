#include "main.h"
#include <unistd.h>

/**
 * create_file - function that creates a file.
 * @filename: is the content inside the file
 * @text_content: number of letters it should read and print
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (0);
	}
	write(1, text_content, n);
	close(fd);
}
