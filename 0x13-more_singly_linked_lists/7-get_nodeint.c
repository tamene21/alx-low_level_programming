#include "lists.h"

/**
 * get_nodeint_at_index - a function to access the Nth node of a list
 * @head:  a pointer to a linked list
 * @index: Nth element of a list
 * Return: Nth element of the list or Null if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	size_t x = 0;

	new_node = head;

	while (new_node)
	{
		if (x == index)
			return (new_node);
		x++;
		new_node = new_node->next;
	}
	return (new_node);

}

