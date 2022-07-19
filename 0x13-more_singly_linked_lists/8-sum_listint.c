#include "lists.h"
/**
 * sum_listint - prints the sum of all the data
 * @head: a pointer to a list
 * Return: sum or 0 if empty
 */


int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	if (!new)
		return (0);

	while (new)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}
