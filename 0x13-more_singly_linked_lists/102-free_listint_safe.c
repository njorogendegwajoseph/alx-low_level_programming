#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
* looped_listint_count - Counts the number of unique nodes in a looped linked list.
* @head: Head pointer.
* return : If list not looped, 0. Otherwise, no of unique nodes.
*
*/

size_t looped_listint_count(listint_t *head)
{
    listint_t *tortoise *hare;
    size_t nodes = 1;
    if (head == NULL || head->next == NULL)
    return (0);

    tortoise = head->next;
    hare = (head->next)->next;

    while (hare)
    {
        if (tortoise = hare)
        {
            tortoise = head;
            while (tortoise != hare)
            {
                nodes++;
                tortoise = tortoise->next;
                hare = hare->next;
            }
            tortoise = tortoise->next;
            while (tortoise != hare)
            {
                nodes++;
                tortoise = tortoise->next;
            }
            return (nodes);
        }
        tortoise = tortoise->next;
        hare = (hare->next)->next;
    }
    return (0);
}

/**
* free_listint_safe: Frees a listint_t list.
*
*/

size_t free_listint_safe(listint_t **h)
{
    listint_t *tmp;
    size_t nodes, index;

    nodes = looped_listint_count(*h);

    if (nodes == 0)
    {
        for (; h != NULL && *h != NULL; nodes++)
        {
            tmp = (*h)->next;
            free(*h);
            *h = tmp;
        }
    }

    else
    {
        for (index = 0; index < nodes; index++)
        {
            tmp = (*h)->next;
            free(*h);
            *h = tmp;
        }
    }

    *h = NULL;

    return (nodes);
}