#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of index
 * @head: pointer to pointer to a head of a list.
 * @index: position of node to delete.
 *
 * Return: 1 (success) else -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ptr = NULL;
	listint_t *node;

	if (!(*head))
		return (-1);

	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (x == index)
		{
			ptr->next = node->next;
			free(node);
			return (1);
		}
		ptr = node;
		node = node->next;
		x++;
	}

	return (-1);
}

