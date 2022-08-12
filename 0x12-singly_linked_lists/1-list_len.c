#include "lists.h"

/**
* list-len: Finds the no f elements i alinked list
* @h: The lists.
* @elements: a counter for var for size_t.
*
*/

size_t list_len(const list_t *h)
{
    size_t elements = 0;

    while (h)
    {
        elements++;
        h = h->next;
    }
    return (elements);
}