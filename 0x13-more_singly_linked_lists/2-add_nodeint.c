#include "lists.h"

/**
* add_node: This one adds a node at the beggn.
* @head: a pointer to head's address.
* @n: The int for the new node to contain.
* 
* Return: If func fails, NULL.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if = (new == NULL)
    return (NULL);

    new->n = n;
    new->next = *head;

    *head = new;

    return (new);
}