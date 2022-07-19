#include "lists.h"

/**
 * free_listint2 - a function to free a list
 * @head: header pointer lists to be free
 */


void free_listint2(listint_t **head)
{
	listint_t *empty;
	listint_t *new;

	if (head == NULL)
		return;
	new = *head;
	while (new)
	{
		empty = new;
		new = empty->next;
		free(empty);

	}
	*head = NULL;
	head = NULL;

}
