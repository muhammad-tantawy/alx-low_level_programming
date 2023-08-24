#include "lists.h"

/**
 * add_node - function adds anode at the beginning
 * @head:pointer to the address pointer of the node
 * @str: string of the new node to be added.
 * Return: returns the address of the added node.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *node;
	size_t len2 = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str)
	{
		while (str[len2])
		len2++;
	}
	node->str = dup;
	node->len = len2;
	node->next = *head;
	*head = node;
	return (node);
}

