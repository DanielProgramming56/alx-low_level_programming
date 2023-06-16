#include "lists.h"

/**
 * add_dnodeint - doubly linked list
 * @n: integer
 * @head: the head pointer
 *
 * Description: insert node at the front of a linked list
 * Return: new node created
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *value = malloc(sizeof(dlistint_t));
if (value == NULL)
return (NULL);
value->prev = NULL;
value->n = n;
if (*head == NULL)
value->next = NULL;
else
{
value->next = *head;
(*head)->prev = value;
}
*head = value;
return (value);
}
