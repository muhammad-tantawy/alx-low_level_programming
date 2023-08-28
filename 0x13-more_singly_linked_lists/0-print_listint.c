#include "lists.h"

/**
 * print_listint - function prints all elements of a list
 * @h: header address of the start list
 * Return: returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t const *head =h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
