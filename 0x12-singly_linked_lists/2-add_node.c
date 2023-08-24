#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	struct list_t *node;
	unsigned int len2 = 0;

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

