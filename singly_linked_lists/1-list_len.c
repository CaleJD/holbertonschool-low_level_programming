#include "lists.h"

/**
* list_t - counts the number of nodes
* @h: pointer to the head of the list
*
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
