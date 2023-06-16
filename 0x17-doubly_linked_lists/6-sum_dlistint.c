#include "lists.h"

/**
 * sum_dlistint - doubly linked list
 * @head: the head pointer
 * Description: return the addition of all  element in a linkedlist
 * Return: sum of al element
*/

int sum_dlistint(dlistint_t *head)
{
int count = 0;
dlistint_t *value = head;
if (head == NULL)
return (0);

while (value != NULL)
{
count += value->n;
value = value->next;
}

return (count);
}
