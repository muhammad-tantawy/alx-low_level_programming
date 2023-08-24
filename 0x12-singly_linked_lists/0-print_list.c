#include "lists.h"

/**
 *print_list - function prints the elements of a list
 *@h: address of the first element of teh list
 *Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			size++;
		}
	}
	return (size);
}




