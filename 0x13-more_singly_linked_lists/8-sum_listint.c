#include "lists.h"

/**
 * sum_listint - func adds all the contents of a linked list
 * @head: head pointer to the first node
 * Return: returns the sum
 */

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
