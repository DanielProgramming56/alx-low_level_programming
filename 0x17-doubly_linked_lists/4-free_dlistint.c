#include "lists.h"

/**
 * free_dlistint - doubly linked list
 * @head: the head pointer
 *
 * Description: delete node at a  linked list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *nextNode;
dlistint_t *present = head;

while (present != NULL)
{
nextNode = present->next;
free(present);
present = nextNode;
}
}
