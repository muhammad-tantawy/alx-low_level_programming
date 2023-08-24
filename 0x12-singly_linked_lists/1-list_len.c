#include "lists.h"

/**
 * list_len - function returns the number of linked list items
 * @h: the pointer to the head element
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{

	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;

	}
	return (length);
}

