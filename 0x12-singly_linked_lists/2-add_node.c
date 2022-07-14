#include "lists.h"
#include<stdlib.h>
#include<string.h>

/**
 *add_node - a function to add a node at the bigging
 *@head: a pointer to a pointer
 *@str: a pointer to a new entray
 *Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *temp;
	unsigned int len;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);

	*head = temp;

	return (*head);
}
