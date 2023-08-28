#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc (sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	node->next = NULL;
	return (node);
}


