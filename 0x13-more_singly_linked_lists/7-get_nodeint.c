#include "lists.h"

/**
 * get_nodeint_at_index - function returns node at index
 * @head: pointer to the head element
 * @index: the index we want the element
 * Return: returns the node at desired index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int  i = 0;
	listint_t *node = head;

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
