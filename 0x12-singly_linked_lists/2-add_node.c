#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * _strlen - prints length of the string
 * @str: string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
		i++;

	return (i);

}


/**
 *add_node - a function to add a node at the bigging
 *@head: a pointer to a pointer
 *@str: a pointer to a new entray
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	*head = new_node;

	return (*head);


}
