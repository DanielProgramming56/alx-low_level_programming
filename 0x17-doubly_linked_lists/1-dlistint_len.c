#include "lists.h"

/**
 * dlistint_len - return the number of element
 * @h: the header pointer to a linked lists
 * Return: element of items
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
