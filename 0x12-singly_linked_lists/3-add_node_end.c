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
	unsigned int len2 = 0;
	list_t *temp = *head;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	while (str[len2])
		len2++;
	node->str = strdup(str);
	node->len = len2;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}

