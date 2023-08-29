#include "lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int  i = 0;
	listint_t *node = head;

	for (i = 0; i < index - 1; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
