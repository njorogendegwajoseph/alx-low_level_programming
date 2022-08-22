#include <stdio.h>
#include "lists.h"

/**
* listint_len - Return the number of elements in list
* @h: A pointer to the head of the list.
* Return: Number of elemnts in the list.
*/

size_t listint_len(const listint_t *h)
{
    size_t nodes = 0;
    while (h)
    {
        nodes++;
        h = h->next;
    }
    return (nodes);
}