#include "lists.h"


size_t list_len(const list_t *h)
{

	long unsigned length =1;

	while (h != NULL)
	{
		if (h->next != NULL)
		{
			h = h->next;
			length++;
		}
	}
	return (length);
}

