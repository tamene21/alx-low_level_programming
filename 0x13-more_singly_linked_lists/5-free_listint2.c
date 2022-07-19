#include "lists.h"

/**
 * free_listint2 - a function to free a list
 * @head: header pointer lists to be free
 */


void free_listint2(listint_t **head)
{
	listint_t *empty;

	if (head == NULL)
		return;

	while (*head)
	{
		empty = *head->next;
		free(*head);
		*head = empty;

	}
	*head = NULL;

}
