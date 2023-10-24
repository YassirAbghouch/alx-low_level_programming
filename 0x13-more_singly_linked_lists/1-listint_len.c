#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: the first element of a list.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
