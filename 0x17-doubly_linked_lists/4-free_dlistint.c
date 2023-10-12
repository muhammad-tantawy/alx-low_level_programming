#include "lists.h"
/**
 * free_dlistint - func frees the double linked list
 * @head: the head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
