#include "lists.h"
/**
 * dlistint_len - function returns length of the list
 * @h: the head pointer of the list
 * Return: returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
