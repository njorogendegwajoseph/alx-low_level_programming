#include "lists.h"

/**
* free_listint - Frees a listint list.
* @head: A pointer to the head to be freed.
*/

void free_listint(listint_t *head)
{
    listint_t *tmp;

    while (head)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}