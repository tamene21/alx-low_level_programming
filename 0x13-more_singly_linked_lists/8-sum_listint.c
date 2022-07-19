#include "lists.h"
/**
 * sum_listint - prints the sum of all the data
 * @head: a pointer to a list
 * Return: sum or 0 if empty
 */


int sum_listint(listint_t *head)
{
	listint_t sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
