#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @data: Data inside the node
 * @prev: Pointer to previous node
 * @next: Pointer to next node
 *
 * Description: Doubly linked node structure
 */
typedef struct dlistint_s
{
	int data;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
