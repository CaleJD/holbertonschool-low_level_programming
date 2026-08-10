#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: node at index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;

	while (head != NULL && check < index)
	{
		head = head->next;
		check++;
	}

	return (head);
}
