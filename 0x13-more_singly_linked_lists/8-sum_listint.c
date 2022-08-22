#include "lists.h"

/**
* sum_listint - Calculates the sum of all data.
* @head: A pointer to the head.
* Return: If the list is empty, 0. Otherwise, *     sum.
*/

int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}