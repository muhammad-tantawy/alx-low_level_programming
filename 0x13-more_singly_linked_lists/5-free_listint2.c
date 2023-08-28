#include "lists.h"

/**
 * free_listint2 - function frees node from a list
 * @head: head pointer to the head element in a list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

