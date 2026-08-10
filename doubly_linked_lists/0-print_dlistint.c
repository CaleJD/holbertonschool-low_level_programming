#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->data == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("%d\n", h->data);
	}
	h = h->next;
	counter++;
	}
	return (counter);
}
