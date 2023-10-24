#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: first element pointer.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
