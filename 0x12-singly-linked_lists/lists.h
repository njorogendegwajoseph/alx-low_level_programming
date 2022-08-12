#ifndef _LISTS_
#define _LISTS_

/**
* structs lists_s - singly linked lists
* @str: String: (malloc all ctring)
* @len: stringth length
* @nxt: points to the next node
*
* Description: Singly linked lists node strutures.
*/

#include <stdlib.h>

/**
* struct lists_h - singly linked lits.
* @str: string: mallocked.
* @len: length of a string.
*/

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif