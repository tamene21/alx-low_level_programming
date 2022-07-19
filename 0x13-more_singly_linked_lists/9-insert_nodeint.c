#include "lists.h"
#include<stdlib.h>

/**
 *insert_nodeint_at_index - a function to insert at a given node
 *@head: a point to the list
 *@idx: index to be inserted at (position)
 *@n: data on the new node
 *Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *temp;
	int i;

	temp = malloc(sizeof(listint_t));
	if (!head || !temp)
		return (NULL);
	temp->n = n;
	if (!idx)
	{
		temp->next = *head;
		*head = temp;
		return (temp);

	}
	current = *head;

	while (current)
	{
		if (i == idx - 1)
		{
			temp->next = current->next;
			current->next = temp;
			return (temp);
		}
		i++;
		current = current->next;
	}
	free(temp);
	return (NULL);
}

