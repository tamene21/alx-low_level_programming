#include "lists.h"

/**
 * listint_len - print a number of elements in the list
 * @h: a pointer to the list
 * Return: number of elments
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
