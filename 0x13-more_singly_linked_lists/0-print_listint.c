#include "lists.h"

/**
 *print_listint - print all the element of the list
 *@h: pointer to the head of the list
 *Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t elm = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		elm++;
	}

	return (elm);
}
