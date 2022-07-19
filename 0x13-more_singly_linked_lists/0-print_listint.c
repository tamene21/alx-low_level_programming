#include "lists.h"
#include<stdlib.h>
#include<string.h>

/**
 *print_listint - print element of the function
 *@h: top of the node
 *Return: elements
 */

size_t print_listint(const listint_t *h)
{
	size_t elm = 0;

	while (h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		elm++;
	}

	return (elm);
}
