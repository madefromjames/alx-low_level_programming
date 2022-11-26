#include "lists.h"
/**
 * list_len - length of the list
 * @h: head of the list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int no_elements = 0;

	while (h != NULL)
	{
		no_elements++;
		h = h->next;
	}
	return (no_elements);
}
