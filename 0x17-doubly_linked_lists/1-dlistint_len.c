#include "lists.h"

/*
 * print_dlistint - return the number of element
 * @h: the header pointer to a linked lists
 * return: element of items
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while(h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
