#include "lists.h"
/**
 * add_node_end - func adds a node to the beginning of the linked list
 * @head: address of the head
 * @str: string of the new node
 * Return: returns the node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	char *dup;
	unsigned int len2 = 0;
	list_t *temp = NULL;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	dup = strdup(str);
	while (dup[len2])
		len2++;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;

	node->str = dup;
	node->len = len2;
	node->next = NULL;
	return (node);
}

