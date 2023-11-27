#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
{
    int fd;
    ssize_t bytes_read;
    char *buffer;
    int n;
    int *ptr;

    if (filename == NULL) {
        return (0);
    }

    buffer = malloc(sizeof(size_t) * letters);
    if (buffer == NULL) {
        return (0);
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        free(buffer);
        return (0);
    }

    n = read(fd, buffer, letters);
    if (n == -1) {
        close(fd);
        free(buffer);
        return (0);
    }

    bytes_read = write(STDOUT_FILENO, buffer, n);
    if (bytes_read == -1) {
        close(fd);
        free(buffer);
        return (0);
    }

    free(buffer);
    close(fd);

    return (bytes_read);
}
