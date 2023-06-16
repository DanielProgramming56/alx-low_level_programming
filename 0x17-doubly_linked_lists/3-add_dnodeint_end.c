#include "lists.h"

/**
 * add_dnodeint_end - doubly linked list
 * @n: integer
 * @head: the head pointer
 *
 * Description: insert node at the end of a linked list
 * Return: new node created
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *value = malloc(sizeof(dlistint_t));
dlistint_t *temp;
if (value == NULL)
return (NULL);
value->n = n;
value->next = NULL;
if (*head == NULL)
{
value->prev = NULL;
*head = value;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
value->prev = temp;
temp->next = value;
}
return (value);
}
