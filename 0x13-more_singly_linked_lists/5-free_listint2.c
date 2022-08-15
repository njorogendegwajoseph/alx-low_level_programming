#include "lists.h"

/**
* free_listsint2 - Frees a listsint list.
* @head: A pointer tot the address of the head.
* 
*Descr: Sets the head to NULL.
*/

void free_listint2(listint_t **head)
{
    listint_t *tmp;

    if (head == NULL)
    return;

    while (*head)
    {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
    }
    head = NULL;
}