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
    list_t *newlist;
    size_t nel;
    newlist = malloc(sizeof(list_t));
    if (newlist == NULL)
    {
        return (NULL);
    }
    newlist->str = strdup(str);
    for (nel = 0; str[nel]; nel++)
    ;
    newlist->len = nel;
    newlist->next = *head;
    *head = newlist;
    return (*head);
}