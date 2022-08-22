#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* Create_buffer: Allocates 1024 bytes for a buffer.
* @file: Name of file buffer stors char for.
* Return:A pointer to newly allocated buffer.
*/

char *create_buffer(char *file)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        dprint(STDERR_FILENO,
        "Error: Cant write to %s\n", file);
        exit(99);
    }
    return (buffer);
}

/**
*  close_file: Close file descriptor.
* @fd: The desc to be closed.
*/

void close_file(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        dprint(STDERR_FILENO,
        "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

/**
* main - Copies the content of file to another file.
* @argc: No of argum supplied to program.
* argv: An array of pointers to arguments.
*
*/

int main(int argc, char *argv[])
{
    int from, , to, r, w;
    char *buffer;

    if (argc != 3)
    {
        dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer =  create_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    r = read(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do {
        if (from == -1 || r == -1)
        {
            dprint(STDERR_FILENO,
            "Error: Can't read from file %s\n", argv[1]);
            free(buffer);
            exit(98);
        }

        w = write(to, buffer, r);
        if (to == -1 || w == -1)
        {
            dprint(STDERR_FILENO, 
            "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }

        r = read(from, buffer, 1024);
        to = open(argv[2], O_WRONLY | O_APPEND);
    }

  while (r > 0);

    free(buffer);
    close_file(from);
    close_file(to);

    return (0);
}