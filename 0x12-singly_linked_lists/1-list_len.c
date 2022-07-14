#include "lists.h"
#include<stdio.h>
#include<string.h>

/**
 * list_len - the function to pring the string length
 * @h: pointer to the list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{

	size_t z = 0;

	while (h != NULL)
	{
		z++;
		h = h->next;
	}
	return (z);
}
