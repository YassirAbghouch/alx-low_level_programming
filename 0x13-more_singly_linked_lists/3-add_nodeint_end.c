#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the first element of a list.
 * @n: data
 * Return: new head pointer.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

	return (*head);
}
