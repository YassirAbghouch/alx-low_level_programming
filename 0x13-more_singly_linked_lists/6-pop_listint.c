#include "lists.h"
/**
 * pop_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: n.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
