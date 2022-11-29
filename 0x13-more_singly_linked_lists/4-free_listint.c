#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 * Return: free list
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head != NULL)
	{
		free_list = head->next;
		free(head);

		head = free_list;
	}
}
