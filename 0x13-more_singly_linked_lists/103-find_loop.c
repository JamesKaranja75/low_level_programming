#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the linked list to search for.
 *
 * Return: Address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptr = head;
listint_t *temp = head;

if (!head)
return (NULL);

while (ptr && temp && temp->next)
{
temp = temp->next->next;
ptr = ptr->next;
if (temp == ptr)
{
ptr = head;
while (ptr != temp)
{
ptr = ptr->next;
temp = temp->next;
}
return (temp);
}
}

return (NULL);
}
