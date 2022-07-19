#include "lists.h"
#include<stdlib.h>

/**
 * add_nodeint_end - a function to add a node at the end
 * @head: a point to the pointer of the list
 * @n: a data for the new
 * Return: return a list with a new node at the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *last = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);

}
