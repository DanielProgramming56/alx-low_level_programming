#include "lists.h"

/**
 * get_dnodeint_at_index - doubly linked list
 * @head: the head pointer
 * @index: the position
 * Description: return the head in index position
 * Return: position index node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *value = head;
size_t i;
for (i = 0; i <  index; i++)
{
if (value->next != NULL)
{
value = value->next;
}
}
return (value);
}
