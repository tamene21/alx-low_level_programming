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

	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);


	temp->next = *head;
	temp->str = strdup(str);
	temp->len = _strlen(str);

	*head = temp;

	return (*head);
}
