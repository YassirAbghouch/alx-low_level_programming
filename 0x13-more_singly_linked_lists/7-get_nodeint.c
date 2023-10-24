#include "lists.h"
/**
 * get_nodeint_at_index - preturns the nth node of a listint_t linked list.
 * @head: linked list of type listint_t to print
 * @index: the nth node index.
 * Return: nth node pointer.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (!ptr)
	{
		return (NULL);
	}

	return (ptr ? ptr : NULL);
}
