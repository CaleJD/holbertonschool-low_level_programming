#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int check;
	dlistint_t *new_node;
	dlistint_t *current;

	current = *h;
	check = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && check < idx)
	{
		current = current->next;
		check++;
	}

	if (current == NULL && check < idx)
		return (NULL);

	if (current == NULL && check == idx)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
