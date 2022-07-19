#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint - a function to add a new node
 * @head: a pointer to a point of a list
 * @n: data
 * Return: a list with a new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;


	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);


	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);



}
