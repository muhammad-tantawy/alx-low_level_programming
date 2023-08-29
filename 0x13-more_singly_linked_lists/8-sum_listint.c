#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *sum;
	int plus = 0;

	if (head == NULL)
		return (0);
	sum = head;
	while (sum != NULL)
	{
		plus = sum->n + plus;
		sum = sum->next;
	}
	return (plus);
}
