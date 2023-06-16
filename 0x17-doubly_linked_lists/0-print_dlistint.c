#include "lists.h"

/*
 * print_dlistint - print all element is a double linked lists
 * @h: the header pointer to a linked lists
 * return: element of items
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while(h != NULL)
    {
        printf("%i\n", h->n);
        count++;
        h = h->next;
    }

    return count;
}
