#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
		head = head->next;
		sum = sum + head->n;
		}
	}
	return (sum);
}
