#include "main.h"

/**
* create_file: Creates a file.
* @filename: A pointer to name of file.
* @text_content: Pointer to the string to write to the file.
* Return: -1 if it faills, O/w, 1.
*/

int create_file(const char *filename, char *text_content)
{
    int o, w, len = 0;

    if (filename == NULL)
    return (-1);

    if (text_content == NULL)
    {
        for (len = 0; text_content[len];)
        len++;
    }

    o = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
    w = write(o, text_content, len);

    if (0 == -1 || w == -1)
    return (-1);
}