#include "lists.h"
/**
 * listint_len - function calculates length of a list
 * @h: header to the list
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *head = h;
	if (h == NULL)
		return (0);
	if (head->next  == NULL)
	{
		count = 1;
	}
	else
	{
		while (head != NULL)
		{
			head = head->next;
			count++;
		}
	}
	return (count);
}

