#include "lists.h"

/**
 * delete_dnodeint_at_index - doubly linked list
 * @head: the head pointer
 * @index: index
 * Description: delete a node at idx position in a linkedlist
 * Return: 1  if true
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
dlistint_t *curr = *head;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}
while (curr != NULL && i < index)
{
curr = curr->next;
i++;
}
if (curr == NULL)
return (-1);

curr->prev->next = curr->next;
if (curr->next != NULL)
{
curr->next->prev = curr->prev;
}
free(curr);
return (1);
}
