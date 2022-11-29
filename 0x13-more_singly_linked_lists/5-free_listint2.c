#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of the list
 * Return: free list
 */
void free_listint2(listint_t **head)
{
	listint_t *free_list2;

	while (*head != NULL)
	{
		free_list2 = (*head)->next;
		free(*head);

		*head = free_list2;
	}
	*head = NULL;
}
