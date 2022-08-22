#include "lists.h"

/**
* reverse_listint - Reverse a list .
* @head: A pointer to head node.
* @Return: A pointer to the first node of revesed
*       list.
*/

listint_t *reverse_listint(listint_t **head)
{
    listint_t *ahead, *behind;

    if (head == NULL)
    return (NULL);

    behind = NULL;

    while ((*head)->next != NULL)
    {
        ahead = (*head)->next;
        (*head)->next = behind;
        behind = *head;
        *head = ahead;
    }
    (*head)->next = behind;

    return (*head);

}