#include "lists.h"
#include<stdlib.h>

/**
 * free_listint - a function to free a list
 * @head: a pointer to a list
 */

void free_listint(listint_t *head)
{
	listint_t *empty;

	while (head)
	{
		empty = head->next;
		free(head);
		head = empty;
	}


}
