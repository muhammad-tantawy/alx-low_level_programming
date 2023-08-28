#include "lists.h"

/**
 * add_nodeint_end - func adds node at the end of the list
 * @head:pointer to the head node of the list
 * @n: the n part of the new node
 * Return: returns address to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
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


