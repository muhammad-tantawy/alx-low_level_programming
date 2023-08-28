#include "lists.h"


size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *head = h;

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

