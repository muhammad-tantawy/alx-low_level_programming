#include "lists.h"

/**
 * free_list - frees a node
 * @head: address of the node
 */
void free_list(list_t *head)
{
	list_t temp;
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(str);
		free(node);
	}
}


