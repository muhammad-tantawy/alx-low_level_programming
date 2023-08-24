#include "lists.h"

/**
 *size_t - function prints the elements of a list
 *@h: address of the first element of teh list
 *Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	struct list_t *temp = h;
	int count;
	size_t size = 0;

	if (temp -> str == NULL)
		printf("[0] (nil)");
	while (temp -> next != NULL)
	{
		for (i = 0; i < len; i++)
		{
			printf("%c", str[i]);
		}
		temp = h -> next;
		size++;
	}
	return (size);
}




