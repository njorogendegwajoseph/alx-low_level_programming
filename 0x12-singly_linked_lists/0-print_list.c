#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* print-lists: prints the elements of a list+t list.
* @h: The list_t list.
*
*/

size_t print_list(const list_t *h)
{
    size_t nel;
    nel = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
        printf("[%d] %s\n", 0, "(nil)");
        else
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        nel++; 
    }
    return (nel);
}