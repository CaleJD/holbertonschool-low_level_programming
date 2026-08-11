#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, or -1 if the index is invalid
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int check;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);
	current = *head;
	check = 0;
	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}
	while (current->next != NULL && check < index)
	{
		current = current->next;
		check++;
	}
	if (current->next == NULL && check < index)
		return (-1);

	if (current->next == NULL && check == index)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	if (check == index)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
