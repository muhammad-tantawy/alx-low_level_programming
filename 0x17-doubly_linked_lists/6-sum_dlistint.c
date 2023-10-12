#include "lists.h"
/**
 * sum_dlistint - func sums all data of dlist
 * @head: the header node address
 * Return: returns the sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
