#include "lists.h"

/**
 * free_list - frees a node
 * @head: address of the node
 */
void free_list(list_t *head)
{
	if (node != NULL)
	{
		free(node->str);
		free(node);
	}
}


