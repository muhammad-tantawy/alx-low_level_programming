#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	struct list_t node;

	dup = strdup(str);

	node->next = &head;
	node->str = dup;
	if (node)
		return (node);
	else
		return(NULL);
}

