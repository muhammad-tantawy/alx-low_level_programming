#include "lists.h"

/**
 * delete_nodeint_at_index - func deletes a node at position n
 * @head: head pointer of the list
 * @index: the position to delete its node
 * Return: returns 1 if success or -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

	unsigned int count;
	listint_t *after = *head;
	listint_t *pre = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = after->next;
		free(after);
		return (1);
	}
	else
	{
		for (count = 0; pre && count < index - 1; count++)
		{
			if (pre == NULL)
				return (-1);
			pre = pre->next;
		}
		if (pre == NULL || pre->next == NULL)
			return (-1);
		after = pre->next;
		pre->next = after->next;
		free(after);

	}
	return (1);
}
