#include "lists.h"

/**
 *print_listint - print element of the function
 *@h: top of the node
 *Return: elements
 */

size_t print_listint(const listint_t *h)
{
	size_t elm = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		elm++;
	}

	return (elm);
}