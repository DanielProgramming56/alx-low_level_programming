#include "lists.h"


/**
 * insert_dnodeint_at_index - doubly linked list
 * @h: the head pointer
 * @idx: index
 * @n: data value
 * Description: return new node at idx position in a linkedlist
 * Return: new node at idx position
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *value = malloc(sizeof(dlistint_t));
dlistint_t *temp = *h;

unsigned int i = 0;
if (*h == NULL)
return (NULL);
if (value == NULL)
return (NULL);
value->next = NULL;
value->n = n;
value->prev = NULL;
if (*h == NULL)
*h = value;
if (idx == 0)
{
value->next = *h;
if (*h != NULL)
(*h)->prev = value;
*h = value;
return (value);
}

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL)
{
free(value);
return (NULL);
}
value->next = temp->next;
if (temp->next->prev != NULL)
temp->next->prev = value;
temp->next = value;
value->prev = temp;
return (value);
}
