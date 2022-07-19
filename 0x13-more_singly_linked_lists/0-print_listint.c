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
	while (h != NULL)
	{
		printf("[h]", h->next);
		h = h->next;
	}

	return (h);
}
