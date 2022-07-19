#include "lists.h"

/**
 *pop_listint - a function to pop a list
 *@head:a pointer to a list pointer
 *Return: deleted list and 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop;

	if (!head || !*head)
		return (0);

	pop = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (pop);
}
