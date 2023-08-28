#include "lists.h"
/**
 * add_nodeint - func adds a node in the last at beginning
 * @head: head pointer
 * @n: value of the n in the new element
 * Return: returns pointer to the newly created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
