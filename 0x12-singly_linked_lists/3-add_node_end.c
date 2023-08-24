#include "main.h"
/**
 * add_node_end - func adds a node to the beginning of the linked list
 * @head: address of the head
 * @str: string of the new node
 * Return: returns the node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t node;
	char *dup;
	unsigned int len2 = 0;
	list_t *temp = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL);
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
		return (NULL);
	while (dup[len2] != "\0")
		len2++;
	temp = *head;
	while (temp != NULL)
	{
		temp = node->next;
	}
	node->str = dup;
	node->len = len2;
	next = temp;
	return (node);
}

