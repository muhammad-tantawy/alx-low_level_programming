#include "lists.h"
/**
 * insert_nodeint_at_index - func inserts a node at a given index
 * @head: head pointer of first element
 * @idx: index starting at 0 for element to be inserted
 * @n: the data part of the new node
 * Return: the node address or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp1 = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL || *head || NULL)
		return (NULL);
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = (*head)->next;
		*head = new_node;
		new_node->n = n;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && temp1 != NULL; i++)
	{
		temp1 = temp1->next;
	}
	if (temp1 == NULL)
		return (NULL);
	new_node->next = temp1->next;
	temp1->next = new_node;
	new_node->n = n;
	return (new_node);

}
