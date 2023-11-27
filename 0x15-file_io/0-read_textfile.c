#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * read_textfile -reads a text file and prints it to the POSIX standard output.
 * @filename: The number whose bit value is to be fliped
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int fp;
	ssize_t bytes_read;
	char *buff;
	int n;
	int *ptr;

	buff = malloc(sizeof (size_t)* letters);
	if (buff == NULL |)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY | O_RDWR , 0644)
	if	(fp == -1)
	{
		return (0);
	}
	n = read (fp, buff, letters)
	if (n == -1)
	{
		return (0);
	}
	 write(1, buff, n)
	free(buff);
	if (close (fp) == -1)
	{
		exit (0);
	}
}