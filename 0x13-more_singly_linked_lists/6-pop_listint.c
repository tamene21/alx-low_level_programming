#include "lists.h"

/**
 *pop_listint - a function to pop a list
 *@head:a pointer to a list pointer
 *Return: another list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	*temp = *head;

	if (temp)
		*head = temp->next;

	return (temp);
}
