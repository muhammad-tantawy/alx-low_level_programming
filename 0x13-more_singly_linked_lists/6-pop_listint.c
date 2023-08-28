#include "lists.h"
/**
 * pop_listint - func removes the head node and  returns its data
 * @head: the head pointer
 * Return: func returns the head data.
 */

int pop_listint(listint_t **head)

{

	listint_t *temp;

	temp->n = *head->n;
	if (*head == NULL || head == NULL)
		return (0);
	*head->next = NULL;
	*head = NULL;
	return(temp->n);
}

