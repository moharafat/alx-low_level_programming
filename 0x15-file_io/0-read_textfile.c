#include "main.h"
/**
 * read_textfile -reads a text file and prints it to the POSIX standard output.
 * @filename: The number whose bit value is to be fliped
 * @letters: number of letters it should read and print
 * Return: 1 on success, -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	int n, w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(size_t) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	n = read(fp, buff, letters);
	if (n == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buff, n);
	if (w == -1)
	{
		return (0);
	}
	free(buff);
	close(fp);
	return (n);
}
