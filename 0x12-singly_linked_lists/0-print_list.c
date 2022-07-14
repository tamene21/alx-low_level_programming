#include "main.h"
#include<stdio.h>

/**
 * print_list - a function to print all the elements in the list
 * @h: a pointer to the header
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		printf("%d ", h->data);
		h = h->next;
	}
	return (0);

}
