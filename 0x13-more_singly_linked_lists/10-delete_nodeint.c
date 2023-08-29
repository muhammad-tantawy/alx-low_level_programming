#include "lists.h"


int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

	unsigned int count;
	listint_t *after = *head;
	listint_t *pre = *head;

	for (count = 0; after && count <= index; count++)
	{
		after = after->next;
	}

	for (count = 0; pre && count < index; count++)
	{
		if (count == index - 1)
			{
				pre->next = temp;
			}
		else
			pre = pre->next;

	}
}
