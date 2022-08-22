#include "lists.h"

/**
* add_nodeend: Adds a new node at the end.
* @head: A pointer to the head.
* @n: The int for the new node to contain.
* Return: Function fail, NULL.
* Othrwise, address of new element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *last;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
    return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    *head = new;

    else
    {
        last = *head;
        while (last->next != NULL)
        last = last->next;
        last->next = new;
    }
    return (*head);
}