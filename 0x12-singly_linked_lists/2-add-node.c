#include "lists.h"
#include <string.h>

/**
* add-note: adds a new node at the beginning.
* @head: A pointer to the head of the list.
* @str: The string that we add head.
* Return - if fails, NULL, or address of new elmt.
*/

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    char *dup_str;
    int len;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    return (NULL);

    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        free(new);
        return (NULL);
    }
}